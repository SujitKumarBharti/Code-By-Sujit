#!/usr/bin/env python3

import argparse
import base64
import hashlib
import os
import sys
from datetime import datetime, timezone

from cryptography.hazmat.primitives import hashes, serialization
from cryptography.hazmat.primitives.asymmetric import padding, rsa


MAGIC = b"BSILENT-DIGSIG-V1\n"
MAX_COM_DATA = 65533


# Terminal colors
GREEN = "\033[92m"
RED = "\033[91m"
RESET = "\033[0m"


def absolute_path(path):
    return os.path.abspath(os.path.expanduser(path))


def load_private_key(path):
    with open(path, "rb") as file:
        key_data = file.read()

    private_key = serialization.load_pem_private_key(
        key_data,
        password=None
    )

    if not isinstance(private_key, rsa.RSAPrivateKey):
        raise ValueError("Invalid RSA private key.")

    return private_key


def load_public_key(path):
    with open(path, "rb") as file:
        key_data = file.read()

    public_key = serialization.load_pem_public_key(key_data)

    if not isinstance(public_key, rsa.RSAPublicKey):
        raise ValueError("Invalid RSA public key.")

    return public_key


def calculate_sha256(data):
    return hashlib.sha256(data).hexdigest()


def remove_embedded_signature(jpeg_data):

    if not jpeg_data.startswith(b"\xff\xd8"):
        raise ValueError("Only JPEG/JPG files are supported.")

    clean = bytearray(jpeg_data[:2])

    i = 2
    found_signature = None

    while i < len(jpeg_data):

        if jpeg_data[i] != 0xFF:
            raise ValueError("Malformed JPEG.")

        marker_start = i

        while i < len(jpeg_data) and jpeg_data[i] == 0xFF:
            i += 1

        if i >= len(jpeg_data):
            raise ValueError("Malformed JPEG.")

        marker = jpeg_data[i]
        i += 1

        # Start Of Scan.
        # Everything after SOS is image data.
        if marker == 0xDA:
            clean.extend(jpeg_data[marker_start:])
            break

        # End Of Image.
        if marker == 0xD9:
            clean.extend(jpeg_data[marker_start:i])

            if i < len(jpeg_data):
                clean.extend(jpeg_data[i:])

            break

        # Standalone JPEG markers.
        if marker == 0xD8 or 0xD0 <= marker <= 0xD7:
            clean.extend(jpeg_data[marker_start:i])
            continue

        if i + 2 > len(jpeg_data):
            raise ValueError("Malformed JPEG.")

        length = int.from_bytes(
            jpeg_data[i:i + 2],
            "big"
        )

        if length < 2 or i + length > len(jpeg_data):
            raise ValueError("Malformed JPEG.")

        end = i + length

        payload = jpeg_data[i + 2:end]

        # Our embedded signature.
        if marker == 0xFE and payload.startswith(MAGIC):

            if found_signature is not None:
                raise ValueError("Multiple signatures found.")

            found_signature = payload[len(MAGIC):]

        else:
            clean.extend(
                jpeg_data[marker_start:end]
            )

        i = end

    return bytes(clean), found_signature


def create_signature_segment(signature):

    encoded_signature = base64.b64encode(signature)

    payload = MAGIC + encoded_signature

    if len(payload) + 2 > MAX_COM_DATA:
        raise ValueError("Signature is too large.")

    length = len(payload) + 2

    return (
        b"\xff\xfe"
        + length.to_bytes(2, "big")
        + payload
    )


def create_signed_output_path(file_path):

    directory = os.path.dirname(file_path)

    filename = os.path.basename(file_path)

    stem, extension = os.path.splitext(filename)

    if not extension:
        extension = ".jpeg"

    return os.path.join(
        directory,
        f"{stem}_signed{extension}"
    )


def embed_signature(original_jpeg, signature):

    clean_jpeg, _ = remove_embedded_signature(
        original_jpeg
    )

    if not clean_jpeg.startswith(b"\xff\xd8"):
        raise ValueError("Invalid JPEG.")

    signature_segment = create_signature_segment(
        signature
    )

    # Insert signature immediately after JPEG SOI.
    return (
        clean_jpeg[:2]
        + signature_segment
        + clean_jpeg[2:]
    )


def sign_file(private_key_path, file_path):

    private_key_path = absolute_path(
        private_key_path
    )

    file_path = absolute_path(
        file_path
    )

    if not os.path.isfile(private_key_path):
        raise FileNotFoundError(
            "Private key not found."
        )

    if not os.path.isfile(file_path):
        raise FileNotFoundError(
            "File not found."
        )

    if not file_path.lower().endswith(
        (".jpg", ".jpeg")
    ):
        raise ValueError(
            "Only JPEG/JPG files are supported."
        )

    private_key = load_private_key(
        private_key_path
    )

    with open(file_path, "rb") as file:
        original_jpeg = file.read()

    # Remove an existing embedded signature before signing.
    clean_jpeg, _ = remove_embedded_signature(
        original_jpeg
    )

    file_hash = calculate_sha256(
        clean_jpeg
    )

    # RSA-PSS + SHA-256
    signature = private_key.sign(
        clean_jpeg,
        padding.PSS(
            mgf=padding.MGF1(
                hashes.SHA256()
            ),
            salt_length=padding.PSS.MAX_LENGTH
        ),
        hashes.SHA256()
    )

    signed_jpeg = embed_signature(
        original_jpeg,
        signature
    )

    output_path = create_signed_output_path(
        file_path
    )

    temp_path = output_path + ".tmp"

    with open(temp_path, "wb") as file:
        file.write(signed_jpeg)

    os.replace(
        temp_path,
        output_path
    )

    timestamp = (
        datetime.now(timezone.utc)
        .astimezone()
    )

    print()
    print(
        f"{GREEN}✓ SIGNED{RESET}"
    )
    print("--------------------------------")
    print(
        f"Original   : {file_path}"
    )
    print(
        f"Signed     : {output_path}"
    )
    print(
        f"SHA-256    : {file_hash}"
    )
    print(
        "Algorithm  : RSA-2048 + PSS + SHA-256"
    )
    print(
        f"Signed At  : "
        f"{timestamp.strftime('%Y-%m-%d %H:%M:%S %Z')}"
    )
    print("--------------------------------")


def verify_signature(
    public_key_path,
    file_path
):

    public_key_path = absolute_path(
        public_key_path
    )

    file_path = absolute_path(
        file_path
    )

    if not os.path.isfile(public_key_path):
        raise FileNotFoundError(
            "Public key not found."
        )

    if not os.path.isfile(file_path):
        raise FileNotFoundError(
            "File not found."
        )

    if not file_path.lower().endswith(
        (".jpg", ".jpeg")
    ):
        raise ValueError(
            "Only JPEG/JPG files are supported."
        )

    public_key = load_public_key(
        public_key_path
    )

    with open(file_path, "rb") as file:
        signed_jpeg = file.read()

    clean_jpeg, encoded_signature = (
        remove_embedded_signature(
            signed_jpeg
        )
    )

    file_hash = calculate_sha256(
        clean_jpeg
    )

    if encoded_signature is None:

        print()
        print(
            f"{RED}✗ SIGNATURE INVALID{RESET}"
        )
        print("--------------------------------")
        print(
            f"File      : {file_path}"
        )
        print(
            f"SHA-256   : {file_hash}"
        )
        print(
            "Algorithm : RSA-2048 + PSS + SHA-256"
        )
        print("--------------------------------")

        return False

    try:

        signature = base64.b64decode(
            encoded_signature,
            validate=True
        )

    except Exception:

        print()
        print(
            f"{RED}✗ SIGNATURE INVALID{RESET}"
        )
        print("--------------------------------")
        print(
            f"File      : {file_path}"
        )
        print(
            f"SHA-256   : {file_hash}"
        )
        print(
            "Algorithm : RSA-2048 + PSS + SHA-256"
        )
        print("--------------------------------")

        return False

    try:

        public_key.verify(
            signature,
            clean_jpeg,
            padding.PSS(
                mgf=padding.MGF1(
                    hashes.SHA256()
                ),
                salt_length=padding.PSS.MAX_LENGTH
            ),
            hashes.SHA256()
        )

        print()
        print(
            f"{GREEN}✓ SIGNATURE VALID{RESET}"
        )
        print("--------------------------------")
        print(
            f"File      : {file_path}"
        )
        print(
            f"SHA-256   : {file_hash}"
        )
        print(
            "Algorithm : RSA-2048 + PSS + SHA-256"
        )
        print("--------------------------------")

        return True

    except Exception:

        print()
        print(
            f"{RED}✗ SIGNATURE INVALID{RESET}"
        )
        print("--------------------------------")
        print(
            f"File      : {file_path}"
        )
        print(
            f"SHA-256   : {file_hash}"
        )
        print(
            "Algorithm : RSA-2048 + PSS + SHA-256"
        )
        print("--------------------------------")

        return False


def check_signature(
    public_key_path,
    file_path
):

    return verify_signature(
        public_key_path,
        file_path
    )


def build_parser():

    parser = argparse.ArgumentParser(
        prog="digital_sign.py",
        description=(
            "JPEG Digital Signature Tool - "
            "RSA-2048 + PSS + SHA-256"
        )
    )

    subparsers = parser.add_subparsers(
        dest="command",
        required=True
    )

    # SIGN
    sign_parser = subparsers.add_parser(
        "sign",
        help=(
            "Create a separate signed JPEG copy."
        )
    )

    sign_parser.add_argument(
        "-privatekey",
        "--privatekey",
        required=True,
        help="Path to RSA private key."
    )

    sign_parser.add_argument(
        "-file",
        "--file",
        required=True,
        help="JPEG/JPG file to sign."
    )

    # CHECK
    check_parser = subparsers.add_parser(
        "check",
        help="Verify a signed JPEG."
    )

    check_parser.add_argument(
        "-publickey",
        "--publickey",
        required=True,
        help="Path to RSA public key."
    )

    check_parser.add_argument(
        "-file",
        "--file",
        required=True,
        help="Signed JPEG/JPG file."
    )

    # VERIFY
    verify_parser = subparsers.add_parser(
        "verify",
        help="Verify a signed JPEG."
    )

    verify_parser.add_argument(
        "-publickey",
        "--publickey",
        required=True,
        help="Path to RSA public key."
    )

    verify_parser.add_argument(
        "-file",
        "--file",
        required=True,
        help="Signed JPEG/JPG file."
    )

    return parser


def main():

    parser = build_parser()

    args = parser.parse_args()

    try:

        if args.command == "sign":

            sign_file(
                args.privatekey,
                args.file
            )

            return 0

        if args.command == "check":

            valid = check_signature(
                args.publickey,
                args.file
            )

            return 0 if valid else 1

        if args.command == "verify":

            valid = verify_signature(
                args.publickey,
                args.file
            )

            return 0 if valid else 1

        return 1

    except Exception as error:

        print(
            f"{RED}✗ ERROR: {error}{RESET}"
        )

        return 2


if __name__ == "__main__":
    sys.exit(main())