import argparse, hashlib, struct, sys
from datetime import datetime
from pathlib import Path
from cryptography.hazmat.primitives import hashes, serialization
from cryptography.hazmat.primitives.asymmetric import padding
from cryptography.exceptions import InvalidSignature
ALGORITHM = "RSA-2048 + PSS + SHA-256"
SUPPORTED_EXTENSIONS = {
    ".jpg": "JPEG Image", ".jpeg": "JPEG Image",
    ".png": "PNG Image", ".gif": "GIF Image",
    ".bmp": "BMP Image", ".pdf": "PDF Document",
    ".docx": "Microsoft Word Document",
    ".xlsx": "Microsoft Excel Spreadsheet",
    ".pptx": "Microsoft PowerPoint Presentation",
    ".zip": "ZIP Archive"}
MAGIC = b"DIGITAL-SIGNATURE-V1"
MAGIC_LEN = len(MAGIC)
RSA2048_SIGNATURE_SIZE = 256
LENGTH_SIZE = 8
GREEN, RED, RESET = "\033[92m", "\033[91m", "\033[0m"
def green(text): return f"{GREEN}{text}{RESET}"
def red(text): return f"{RED}{text}{RESET}"
def calculate_sha256(data):
    return hashlib.sha256(data).hexdigest()
def load_private_key(path):
    path = Path(path)
    if not path.exists():
        raise FileNotFoundError(f"Private key not found: {path}")
    with open(path, "rb") as f:
        key = serialization.load_pem_private_key(f.read(), password=None)
    if not hasattr(key, "key_size") or key.key_size != 2048:
        raise ValueError("Private key must be RSA-2048")
    return key
def load_public_key(path):
    path = Path(path)
    if not path.exists():
        raise FileNotFoundError(f"Public key not found: {path}")
    with open(path, "rb") as f:
        key = serialization.load_pem_public_key(f.read())
    if not hasattr(key, "key_size") or key.key_size != 2048:
        raise ValueError("Public key must be RSA-2048")
    return key
def get_extension(path):
    return Path(path).suffix.lower()
def is_supported_file(path):
    return get_extension(path) in SUPPORTED_EXTENSIONS
def get_file_type(path):
    return SUPPORTED_EXTENSIONS.get(get_extension(path), "Unsupported")
def require_supported_file(path):
    ext = get_extension(path)
    if ext not in SUPPORTED_EXTENSIONS:
        raise ValueError(
            f"Unsupported file type '{ext or '[no extension]'}'. "
            f"Supported types: {', '.join(sorted(SUPPORTED_EXTENSIONS))}")
def create_signature(private_key, data):
    return private_key.sign(
        data, padding.PSS(mgf=padding.MGF1(hashes.SHA256()),
        salt_length=padding.PSS.MAX_LENGTH), hashes.SHA256())
def verify_signature(public_key, data, signature):
    try:
        public_key.verify(
            signature, data, padding.PSS(
            mgf=padding.MGF1(hashes.SHA256()),
            salt_length=padding.PSS.MAX_LENGTH), hashes.SHA256())
        return True
    except InvalidSignature:
        return False
def create_trailer(signature):
    return signature + struct.pack(">Q", len(signature)) + MAGIC
def extract_signature(data):
    minimum_size = RSA2048_SIGNATURE_SIZE + LENGTH_SIZE + MAGIC_LEN
    if len(data) < minimum_size or not data.endswith(MAGIC):
        return None, None
    length_start = len(data) - MAGIC_LEN - LENGTH_SIZE
    signature_length = struct.unpack(
        ">Q", data[length_start:length_start + LENGTH_SIZE])[0]
    if signature_length != RSA2048_SIGNATURE_SIZE:
        return None, None
    signature_start = length_start - signature_length
    if signature_start < 0:
        return None, None
    return data[:signature_start], data[signature_start:length_start]
def remove_signature_if_present(data):
    original, signature = extract_signature(data)
    return original if original is not None and signature is not None else data
def create_signed_filename(path):
    path = Path(path)
    return path.with_name(
        f"{path.stem}_signed{path.suffix}"
        if path.suffix else f"{path.name}_signed")
def sign_file(private_key_path, file_path):
    file_path = Path(file_path)
    if not file_path.exists():
        raise FileNotFoundError(f"File not found: {file_path}")
    if not file_path.is_file():
        raise ValueError(f"Not a regular file: {file_path}")
    require_supported_file(file_path)
    with open(file_path, "rb") as f:
        data = f.read()
    clean_data = remove_signature_if_present(data)
    private_key = load_private_key(private_key_path)
    signature = create_signature(private_key, clean_data)
    output_path = create_signed_filename(file_path)
    with open(output_path, "wb") as f:
        f.write(clean_data + create_trailer(signature))
    sha256 = calculate_sha256(clean_data)
    signed_at = datetime.now().astimezone().strftime("%Y-%m-%d %H:%M:%S %Z")
    print(f"\n{green('✓ DIGITAL SIGNATURE CREATED')}\n--------------------------------")
    print(f"Original   : {file_path.resolve()}")
    print(f"Signed     : {output_path.resolve()}")
    print(f"SHA-256    : {sha256}")
    print(f"Algorithm  : {ALGORITHM}")
    print(f"Signed At  : {signed_at}")
    print("--------------------------------\n")
def check_file(public_key_path, file_path):
    file_path = Path(file_path)
    if not file_path.exists():
        raise FileNotFoundError(f"File not found: {file_path}")
    if not file_path.is_file():
        raise ValueError(f"Not a regular file: {file_path}")
    require_supported_file(file_path)
    with open(file_path, "rb") as f:
        signed_data = f.read()
    original_data, signature = extract_signature(signed_data)
    if original_data is None or signature is None:
        sha256 = calculate_sha256(signed_data)
        print(f"\n{red('✗ SIGNATURE INVALID')}\n--------------------------------")
        print(f"File      : {file_path.resolve()}")
        print(f"SHA-256   : {sha256}")
        print(f"Algorithm : {ALGORITHM}")
        print("--------------------------------\n")
        return False
    public_key = load_public_key(public_key_path)
    valid = verify_signature(public_key, original_data, signature)
    sha256 = calculate_sha256(original_data)
    status = green("✓ SIGNATURE VALID") if valid else red("✗ SIGNATURE INVALID")
    print(f"\n{status}\n--------------------------------")
    print(f"File      : {file_path.resolve()}")
    print(f"SHA-256   : {sha256}")
    print(f"Algorithm : {ALGORITHM}")
    print("--------------------------------\n")
    return valid
def verify_file(public_key_path, file_path):
    return check_file(public_key_path, file_path)
def print_supported_files():
    categories = {
        "Images": [".jpg", ".jpeg", ".png", ".gif", ".bmp"],
        "Documents": [".pdf"],
        "Office": [".docx", ".xlsx", ".pptx"],
        "Archives": [".zip"]}
    print("\nSupported file types:\n")
    for category, extensions in categories.items():
        print(f"  {category}:")
        for ext in extensions:
            print(f"    {ext:<7} {SUPPORTED_EXTENSIONS[ext]}")
        print()
def main():
    description = "RSA-2048/PSS/SHA-256 file signing and verification."
    parser = argparse.ArgumentParser(
        description=description,
        formatter_class=argparse.RawTextHelpFormatter)
    subparsers = parser.add_subparsers(
        dest="command", required=True)
    sign_parser = subparsers.add_parser("sign", help="Sign a file")
    sign_parser.add_argument(
        "-privatekey", required=True, help="Private key path")
    sign_parser.add_argument(
        "-file", required=True, help="File to sign")
    for command, description in [
        ("check", "Check signature"),
        ("verify", "Verify signature")]:
        sub = subparsers.add_parser(command, help=description)
        sub.add_argument(
            "-publickey", required=True, help="Public key path")
        sub.add_argument(
            "-file", required=True, help="Signed file path")
    subparsers.add_parser("supported", help="List supported formats")
    args = parser.parse_args()
    try:
        if args.command == "sign":
            sign_file(args.privatekey, args.file)
        elif args.command in ("check", "verify"):
            sys.exit(
                0 if check_file(args.publickey, args.file) else 1)
        elif args.command == "supported":
            print_supported_files()
    except (FileNotFoundError, ValueError) as e:
        print(f"\n{red(f'✗ ERROR: {e}')}\n")
        sys.exit(1)
    except Exception as e:
        print(f"\n{red(f'✗ ERROR: {e}')}\n")
        sys.exit(1)
if __name__ == "__main__":
    main()