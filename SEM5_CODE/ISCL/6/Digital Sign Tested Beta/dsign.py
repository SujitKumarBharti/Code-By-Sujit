#!/usr/bin/env python3

import argparse
import hashlib
import struct
import sys
from datetime import datetime
from pathlib import Path

from cryptography.hazmat.primitives import hashes, serialization
from cryptography.hazmat.primitives.asymmetric import padding
from cryptography.exceptions import InvalidSignature


# ============================================================
# CONFIGURATION
# ============================================================

ALGORITHM = "RSA-2048 + PSS + SHA-256"

# ------------------------------------------------------------
# Supported file extensions
# ------------------------------------------------------------

SUPPORTED_EXTENSIONS = {
    # Images
    ".jpg": "JPEG Image",
    ".jpeg": "JPEG Image",
    ".png": "PNG Image",
    ".gif": "GIF Image",
    ".bmp": "BMP Image",

    # Documents
    ".pdf": "PDF Document",

    # Office / ZIP based
    ".docx": "Microsoft Word Document",
    ".xlsx": "Microsoft Excel Spreadsheet",
    ".pptx": "Microsoft PowerPoint Presentation",

    # Archive
    ".zip": "ZIP Archive",
}


# ============================================================
# SIGNATURE TRAILER
#
# Signed file:
#
# [ORIGINAL FILE DATA]
# [RSA SIGNATURE]
# [SIGNATURE LENGTH - 8 BYTES]
# [MAGIC]
#
# Only formats that safely tolerate trailing data are allowed.
# ============================================================

MAGIC = b"BSILENT-DIGSIG-V4"
MAGIC_LEN = len(MAGIC)

# RSA-2048 produces a 256-byte signature
RSA2048_SIGNATURE_SIZE = 256

# uint64
LENGTH_SIZE = 8


# ============================================================
# COLORS
# ============================================================

GREEN = "\033[92m"
RED = "\033[91m"
YELLOW = "\033[93m"
RESET = "\033[0m"


def green(text):
    return f"{GREEN}{text}{RESET}"


def red(text):
    return f"{RED}{text}{RESET}"


def yellow(text):
    return f"{YELLOW}{text}{RESET}"


# ============================================================
# SHA-256
# ============================================================

def calculate_sha256(data):
    return hashlib.sha256(data).hexdigest()


# ============================================================
# KEY LOADING
# ============================================================

def load_private_key(path):
    path = Path(path)

    if not path.exists():
        raise FileNotFoundError(
            f"Private key not found: {path}"
        )

    with open(path, "rb") as f:
        return serialization.load_pem_private_key(
            f.read(),
            password=None
        )


def load_public_key(path):
    path = Path(path)

    if not path.exists():
        raise FileNotFoundError(
            f"Public key not found: {path}"
        )

    with open(path, "rb") as f:
        return serialization.load_pem_public_key(
            f.read()
        )


# ============================================================
# FILE SUPPORT CHECK
# ============================================================

def get_extension(file_path):
    return Path(file_path).suffix.lower()


def is_supported_file(file_path):
    extension = get_extension(file_path)

    return extension in SUPPORTED_EXTENSIONS


def get_file_type(file_path):
    extension = get_extension(file_path)

    return SUPPORTED_EXTENSIONS.get(
        extension,
        "Unsupported"
    )


def require_supported_file(file_path):
    extension = get_extension(file_path)

    if extension not in SUPPORTED_EXTENSIONS:

        supported = ", ".join(
            sorted(SUPPORTED_EXTENSIONS.keys())
        )

        raise ValueError(
            f"Unsupported file type '{extension or '[no extension]'}'. "
            f"Supported types: {supported}"
        )


# ============================================================
# RSA SIGNATURE
# ============================================================

def create_signature(private_key, data):

    return private_key.sign(
        data,

        padding.PSS(
            mgf=padding.MGF1(hashes.SHA256()),
            salt_length=padding.PSS.MAX_LENGTH
        ),

        hashes.SHA256()
    )


# ============================================================
# RSA VERIFICATION
# ============================================================

def verify_signature(public_key, data, signature):

    try:

        public_key.verify(
            signature,
            data,

            padding.PSS(
                mgf=padding.MGF1(hashes.SHA256()),
                salt_length=padding.PSS.MAX_LENGTH
            ),

            hashes.SHA256()
        )

        return True

    except InvalidSignature:

        return False


# ============================================================
# CREATE SIGNATURE TRAILER
# ============================================================

def create_trailer(signature):

    signature_length = struct.pack(
        ">Q",
        len(signature)
    )

    return (
        signature
        + signature_length
        + MAGIC
    )


# ============================================================
# EXTRACT SIGNATURE TRAILER
# ============================================================

def extract_signature(data):

    minimum_size = (
        RSA2048_SIGNATURE_SIZE
        + LENGTH_SIZE
        + MAGIC_LEN
    )

    if len(data) < minimum_size:
        return None, None

    # --------------------------------------------------------
    # Check magic
    # --------------------------------------------------------

    if not data.endswith(MAGIC):
        return None, None

    # --------------------------------------------------------
    # Locate signature length
    # --------------------------------------------------------

    length_start = (
        len(data)
        - MAGIC_LEN
        - LENGTH_SIZE
    )

    signature_length = struct.unpack(
        ">Q",
        data[
            length_start:
            length_start + LENGTH_SIZE
        ]
    )[0]

    # --------------------------------------------------------
    # RSA-2048 signature must be 256 bytes
    # --------------------------------------------------------

    if signature_length != RSA2048_SIGNATURE_SIZE:
        return None, None

    # --------------------------------------------------------
    # Locate signature
    # --------------------------------------------------------

    signature_start = (
        length_start
        - signature_length
    )

    if signature_start < 0:
        return None, None

    signature = data[
        signature_start:
        length_start
    ]

    original_data = data[
        :signature_start
    ]

    return original_data, signature


# ============================================================
# REMOVE EXISTING SIGNATURE
# ============================================================

def remove_signature_if_present(data):

    original_data, signature = extract_signature(data)

    if (
        original_data is not None
        and signature is not None
    ):
        return original_data

    return data


# ============================================================
# SIGNED OUTPUT NAME
# ============================================================

def create_signed_filename(file_path):

    path = Path(file_path)

    if path.suffix:

        return path.with_name(
            f"{path.stem}_signed{path.suffix}"
        )

    return path.with_name(
        f"{path.name}_signed"
    )


# ============================================================
# SIGN FILE
# ============================================================

def sign_file(private_key_path, file_path):

    file_path = Path(file_path)

    # --------------------------------------------------------
    # File checks
    # --------------------------------------------------------

    if not file_path.exists():

        raise FileNotFoundError(
            f"File not found: {file_path}"
        )

    if not file_path.is_file():

        raise ValueError(
            f"Not a regular file: {file_path}"
        )

    # --------------------------------------------------------
    # Extension check
    # --------------------------------------------------------

    require_supported_file(file_path)

    # --------------------------------------------------------
    # Read original file
    # --------------------------------------------------------

    with open(file_path, "rb") as f:
        data = f.read()

    # --------------------------------------------------------
    # Remove old signature if input is already signed
    # --------------------------------------------------------

    clean_data = remove_signature_if_present(data)

    # --------------------------------------------------------
    # Load private key
    # --------------------------------------------------------

    private_key = load_private_key(
        private_key_path
    )

    # --------------------------------------------------------
    # Create RSA signature
    # --------------------------------------------------------

    signature = create_signature(
        private_key,
        clean_data
    )

    # --------------------------------------------------------
    # Create trailer
    # --------------------------------------------------------

    trailer = create_trailer(
        signature
    )

    # --------------------------------------------------------
    # Output filename
    # --------------------------------------------------------

    output_path = create_signed_filename(
        file_path
    )

    # --------------------------------------------------------
    # Write signed file
    # --------------------------------------------------------

    with open(output_path, "wb") as f:

        f.write(clean_data)
        f.write(trailer)

    # --------------------------------------------------------
    # SHA-256 of original data
    # --------------------------------------------------------

    sha256 = calculate_sha256(
        clean_data
    )

    # --------------------------------------------------------
    # Timestamp
    # --------------------------------------------------------

    signed_at = datetime.now().astimezone().strftime(
        "%Y-%m-%d %H:%M:%S %Z"
    )

    # --------------------------------------------------------
    # Output
    # --------------------------------------------------------

    print()

    print(
        green("✓ DIGITAL SIGNATURE CREATED")
    )

    print("--------------------------------")

    print(
        f"Original   : {file_path.resolve()}"
    )

    print(
        f"Signed     : {output_path.resolve()}"
    )

    print(
        f"SHA-256    : {sha256}"
    )

    print(
        f"Algorithm  : {ALGORITHM}"
    )

    print(
        f"Signed At  : {signed_at}"
    )

    print("--------------------------------")

    print()


# ============================================================
# CHECK SIGNATURE
# ============================================================

def check_file(public_key_path, file_path):

    file_path = Path(file_path)

    # --------------------------------------------------------
    # File checks
    # --------------------------------------------------------

    if not file_path.exists():

        raise FileNotFoundError(
            f"File not found: {file_path}"
        )

    if not file_path.is_file():

        raise ValueError(
            f"Not a regular file: {file_path}"
        )

    # --------------------------------------------------------
    # Extension check
    # --------------------------------------------------------

    require_supported_file(file_path)

    # --------------------------------------------------------
    # Read signed file
    # --------------------------------------------------------

    with open(file_path, "rb") as f:
        signed_data = f.read()

    # --------------------------------------------------------
    # Extract original data + signature
    # --------------------------------------------------------

    original_data, signature = extract_signature(
        signed_data
    )

    # --------------------------------------------------------
    # No valid trailer
    # --------------------------------------------------------

    if (
        original_data is None
        or signature is None
    ):

        sha256 = calculate_sha256(
            signed_data
        )

        print()

        print(
            red("✗ SIGNATURE INVALID")
        )

        print("--------------------------------")

        print(
            f"File      : {file_path.resolve()}"
        )

        print(
            f"SHA-256   : {sha256}"
        )

        print(
            f"Algorithm : {ALGORITHM}"
        )

        print("--------------------------------")

        print()

        return False

    # --------------------------------------------------------
    # Load public key
    # --------------------------------------------------------

    public_key = load_public_key(
        public_key_path
    )

    # --------------------------------------------------------
    # Verify signature
    # --------------------------------------------------------

    valid = verify_signature(
        public_key,
        original_data,
        signature
    )

    # --------------------------------------------------------
    # SHA-256
    # --------------------------------------------------------

    sha256 = calculate_sha256(
        original_data
    )

    # --------------------------------------------------------
    # Output
    # --------------------------------------------------------

    print()

    if valid:

        print(
            green("✓ SIGNATURE VALID")
        )

    else:

        print(
            red("✗ SIGNATURE INVALID")
        )

    print("--------------------------------")

    print(
        f"File      : {file_path.resolve()}"
    )

    print(
        f"SHA-256   : {sha256}"
    )

    print(
        f"Algorithm : {ALGORITHM}"
    )

    print("--------------------------------")

    print()

    return valid


# ============================================================
# VERIFY
# ============================================================

def verify_file(public_key_path, file_path):

    return check_file(
        public_key_path,
        file_path
    )


# ============================================================
# HELP
# ============================================================

def print_supported_files():

    print()
    print("Supported file types:")
    print()

    categories = {
        "Images": [
            ".jpg",
            ".jpeg",
            ".png",
            ".gif",
            ".bmp",
        ],

        "Documents": [
            ".pdf",
        ],

        "Office": [
            ".docx",
            ".xlsx",
            ".pptx",
        ],

        "Archives": [
            ".zip",
        ],
    }

    for category, extensions in categories.items():

        print(f"  {category}:")

        for extension in extensions:

            description = SUPPORTED_EXTENSIONS[
                extension
            ]

            print(
                f"    {extension:<7} {description}"
            )

        print()


# ============================================================
# MAIN
# ============================================================

def main():

    description = (
        "Digital Signature Tool using "
        "RSA-2048 + PSS + SHA-256.\n\n"
        "The signature is stored in a custom trailer "
        "at the end of supported files.\n"
        "Only file formats that safely tolerate the "
        "trailer are supported."
    )

    parser = argparse.ArgumentParser(
        description=description,
        formatter_class=argparse.RawTextHelpFormatter
    )

    subparsers = parser.add_subparsers(
        dest="command",
        required=True
    )

    # ========================================================
    # SIGN
    # ========================================================

    sign_parser = subparsers.add_parser(
        "sign",
        help="Create a digital signature"
    )

    sign_parser.add_argument(
        "-privatekey",
        required=True,
        help="Path to RSA private key"
    )

    sign_parser.add_argument(
        "-file",
        required=True,
        help="Supported file to sign"
    )

    # ========================================================
    # CHECK
    # ========================================================

    check_parser = subparsers.add_parser(
        "check",
        help="Check an embedded digital signature"
    )

    check_parser.add_argument(
        "-publickey",
        required=True,
        help="Path to RSA public key"
    )

    check_parser.add_argument(
        "-file",
        required=True,
        help="Signed file"
    )

    # ========================================================
    # VERIFY
    # ========================================================

    verify_parser = subparsers.add_parser(
        "verify",
        help="Verify an embedded digital signature"
    )

    verify_parser.add_argument(
        "-publickey",
        required=True,
        help="Path to RSA public key"
    )

    verify_parser.add_argument(
        "-file",
        required=True,
        help="Signed file"
    )

    # ========================================================
    # SUPPORTED FILES
    # ========================================================

    supported_parser = subparsers.add_parser(
        "supported",
        help="Show all supported file types"
    )

    args = parser.parse_args()

    try:

        # ----------------------------------------------------
        # SIGN
        # ----------------------------------------------------

        if args.command == "sign":

            sign_file(
                args.privatekey,
                args.file
            )

        # ----------------------------------------------------
        # CHECK
        # ----------------------------------------------------

        elif args.command == "check":

            valid = check_file(
                args.publickey,
                args.file
            )

            sys.exit(
                0 if valid else 1
            )

        # ----------------------------------------------------
        # VERIFY
        # ----------------------------------------------------

        elif args.command == "verify":

            valid = verify_file(
                args.publickey,
                args.file
            )

            sys.exit(
                0 if valid else 1
            )

        # ----------------------------------------------------
        # SUPPORTED
        # ----------------------------------------------------

        elif args.command == "supported":

            print_supported_files()

    except FileNotFoundError as e:

        print()
        print(
            red(f"✗ ERROR: {e}")
        )
        print()

        sys.exit(1)

    except ValueError as e:

        print()
        print(
            red(f"✗ ERROR: {e}")
        )
        print()

        sys.exit(1)

    except Exception as e:

        print()
        print(
            red(f"✗ ERROR: {e}")
        )
        print()

        sys.exit(1)


if __name__ == "__main__":
    main()