"""
Digital Signature System (RSA-2048 bit + SHA-256) — Full Version
===========================================================
Works for ANY file type — images (.jpg, .png), videos (.mp4, .avi), documents, etc.

Requires:
    pip install cryptography pillow --break-system-packages
    sudo apt install ffmpeg -y          (only needed for video watermarking)

COMMANDS:
---------
1) Generate your RSA key pair (run once):
   python digital_signature.py generate

2) Sign a file (creates a .sig + a readable certificate.txt):
   python digital_signature.py sign "/full/path/to/file.jpg"

3) Verify a file — full detailed check (VALID/INVALID + certificate +
   watermark on images/videos if valid):
   python digital_signature.py verify "/full/path/to/file.jpg" "/full/path/to/file.jpg.sig"

4) Quick check — "is this the SAME file or a DIFFERENT/EDITED one?"
   (same as verify, but a short, clear one-line answer — no
   certificate/watermark clutter, good for a fast yes/no check):
   python digital_signature.py check "/full/path/to/file.jpg" "/full/path/to/file.jpg.sig"

NOTES:
------
- The .sig file is NOT meant to be opened/played — it is pure encrypted
  proof data, only usable by the "verify"/"check" commands above.
- If verification is VALID on an IMAGE, a watermarked copy is created
  automatically (file_signed.jpg) with "✔ Digitally Signed" stamped on it.
- If verification is VALID on a VIDEO, a watermarked copy is created
  automatically (file_signed.mp4) with "Digitally Signed" burned onto
  every frame (requires FFmpeg installed).
- Even a tiny edit (one pixel, one byte) to the file will make
  verification FAIL — that's the whole point of a digital signature.
"""

import sys
import os
import hashlib
import datetime
import subprocess
import shutil
from cryptography.hazmat.primitives import hashes, serialization
from cryptography.hazmat.primitives.asymmetric import rsa, padding
from cryptography.exceptions import InvalidSignature

IMAGE_EXTENSIONS = (".jpg", ".jpeg", ".png", ".bmp", ".gif", ".webp")
VIDEO_EXTENSIONS = (".mp4", ".avi", ".mov", ".mkv", ".webm")

PRIVATE_KEY_FILE = "private_key.pem"
PUBLIC_KEY_FILE = "public_key.pem"


# ---------------------------------------------------------
# 1. Generate RSA key pair (run once)
# ---------------------------------------------------------
def generate_keys():
    private_key = rsa.generate_private_key(public_exponent=65537, key_size=2048)
    public_key = private_key.public_key()

    with open(PRIVATE_KEY_FILE, "wb") as f:
        f.write(private_key.private_bytes(
            encoding=serialization.Encoding.PEM,
            format=serialization.PrivateFormat.PKCS8,
            encryption_algorithm=serialization.NoEncryption(),
        ))

    with open(PUBLIC_KEY_FILE, "wb") as f:
        f.write(public_key.public_bytes(
            encoding=serialization.Encoding.PEM,
            format=serialization.PublicFormat.SubjectPublicKeyInfo,
        ))

    print(f"[+] Keys generated:\n    {PRIVATE_KEY_FILE}\n    {PUBLIC_KEY_FILE}")


def ensure_keys():
    """Agar keys missing hain to error de (generate command chalane ko bole)."""
    if not (os.path.isfile(PRIVATE_KEY_FILE) and os.path.isfile(PUBLIC_KEY_FILE)):
        print("[!] Keys not found. Pehle ye chalao: python digital_signature.py generate")
        sys.exit(1)


# ---------------------------------------------------------
# 2. Sign a file (image, video, or any file) — full path
# ---------------------------------------------------------
def sign_file(file_path: str):
    ensure_keys()
    if not os.path.isfile(file_path):
        print(f"[!] File not found: {file_path}")
        return

    with open(PRIVATE_KEY_FILE, "rb") as f:
        private_key = serialization.load_pem_private_key(f.read(), password=None)

    with open(file_path, "rb") as f:
        data = f.read()

    signature = private_key.sign(
        data,
        padding.PSS(
            mgf=padding.MGF1(hashes.SHA256()),
            salt_length=padding.PSS.MAX_LENGTH,
        ),
        hashes.SHA256(),
    )

    sig_path = file_path + ".sig"
    with open(sig_path, "wb") as f:
        f.write(signature)

    print(f"[+] File signed successfully.")
    print(f"    Signature saved to: {sig_path}")

    write_certificate(file_path, sig_path, data, status="SIGNED")


# ---------------------------------------------------------
# Human-readable certificate (.txt) — this one you CAN open
# and read normally, unlike the .sig file.
# ---------------------------------------------------------
def write_certificate(file_path: str, sig_path: str, data: bytes, status: str):
    file_hash = hashlib.sha256(data).hexdigest()
    cert_path = file_path + "_certificate.txt"

    lines = [
        "========================================",
        "     DIGITAL SIGNATURE CERTIFICATE",
        "========================================",
        f"Status        : {status}",
        f"File Name     : {os.path.basename(file_path)}",
        f"File Path     : {file_path}",
        f"Signature File: {sig_path}",
        f"SHA-256 Hash  : {file_hash}",
        f"Algorithm     : RSA-2048 + PSS + SHA-256",
        f"Timestamp     : {datetime.datetime.now().strftime('%Y-%m-%d %H:%M:%S')}",
        "========================================",
        "This certificate confirms the above file was",
        "digitally signed / verified using the signer's",
        "private/public RSA key pair. If the file content",
        "changes even slightly, verification will FAIL.",
        "========================================",
    ]

    with open(cert_path, "w", encoding="utf-8") as f:
        f.write("\n".join(lines))

    print(f"    Readable certificate saved to: {cert_path}")


# ---------------------------------------------------------
# Watermark an image that passed verification
# ---------------------------------------------------------
def watermark_image(file_path: str):
    try:
        from PIL import Image, ImageDraw, ImageFont
    except ImportError:
        print("    (Skipping watermark — install pillow: pip install pillow --break-system-packages)")
        return

    try:
        img = Image.open(file_path).convert("RGB")
        draw = ImageDraw.Draw(img)

        text = "✔ Digitally Signed"
        font_size = max(10, img.width // 100)
        try:
            font = ImageFont.truetype("DejaVuSans-Bold.ttf", font_size)
        except Exception:
            font = ImageFont.load_default()

        bbox = draw.textbbox((0, 0), text, font=font)
        text_w = bbox[2] - bbox[0]
        text_h = bbox[3] - bbox[1]
        padding_px = 15
        x = img.width - text_w - padding_px * 2
        y = img.height - text_h - padding_px * 2

        overlay = Image.new("RGBA", img.size, (0, 0, 0, 0))
        odraw = ImageDraw.Draw(overlay)
        odraw.rectangle(
            [x, y, x + text_w + padding_px * 2, y + text_h + padding_px * 2],
            fill=(0, 128, 0, 160),
        )
        img = Image.alpha_composite(img.convert("RGBA"), overlay).convert("RGB")
        draw = ImageDraw.Draw(img)
        draw.text((x + padding_px, y + padding_px), text, fill=(255, 255, 255), font=font)

        base, ext = os.path.splitext(file_path)
        out_path = f"{base}_signed{ext}"
        img.save(out_path)
        print(f"    Watermarked copy saved to: {out_path}")
    except Exception as e:
        print(f"    (Could not create watermark: {e})")


# ---------------------------------------------------------
# Watermark a video that passed verification (uses FFmpeg)
# ---------------------------------------------------------
def watermark_video(file_path: str):
    if not shutil.which("ffmpeg"):
        print("    (Skipping video watermark — FFmpeg not installed. Run: sudo apt install ffmpeg)")
        return

    base, ext = os.path.splitext(file_path)
    out_path = f"{base}_signed{ext}"

    drawtext = (
        "drawtext="
        "text='Digitally Signed':"
        "fontcolor=white:"
        "fontsize=h/20:"
        "box=1:boxcolor=green@0.6:boxborderw=10:"
        "x=w-tw-20:y=h-th-20"
    )

    cmd = [
        "ffmpeg", "-y",
        "-i", file_path,
        "-vf", drawtext,
        "-codec:a", "copy",
        out_path,
    ]

    print("    Adding watermark to video (this can take a while for longer videos)...")
    try:
        result = subprocess.run(cmd, capture_output=True, text=True)
        if result.returncode == 0 and os.path.isfile(out_path):
            print(f"    Watermarked video saved to: {out_path}")
        else:
            print("    (Could not create video watermark — FFmpeg error, see below)")
            print(result.stderr[-500:])
    except Exception as e:
        print(f"    (Could not create video watermark: {e})")


# ---------------------------------------------------------
# Core verification logic — shared by "verify" and "check"
# ---------------------------------------------------------
def _run_verification(file_path: str, sig_path: str):
    """Returns (is_valid: bool, data: bytes) or (None, None) on missing files."""
    if not os.path.isfile(file_path):
        print(f"[!] File not found: {file_path}")
        return None, None
    if not os.path.isfile(sig_path):
        print(f"[!] Signature file not found: {sig_path}")
        return None, None

    with open(PUBLIC_KEY_FILE, "rb") as f:
        public_key = serialization.load_pem_public_key(f.read())

    with open(file_path, "rb") as f:
        data = f.read()

    with open(sig_path, "rb") as f:
        signature = f.read()

    try:
        public_key.verify(
            signature,
            data,
            padding.PSS(
                mgf=padding.MGF1(hashes.SHA256()),
                salt_length=padding.PSS.MAX_LENGTH,
            ),
            hashes.SHA256(),
        )
        return True, data
    except InvalidSignature:
        return False, data


# ---------------------------------------------------------
# 3. Verify a file — FULL detailed version (certificate + watermark)
# ---------------------------------------------------------
def verify_file(file_path: str, sig_path: str):
    ensure_keys()
    is_valid, data = _run_verification(file_path, sig_path)
    if is_valid is None:
        return

    if is_valid:
        print(f"[✔] VALID signature — file is authentic and unmodified.")
        print(f"    File: {file_path}")

        write_certificate(file_path, sig_path, data, status="VERIFIED ✔ VALID")

        if file_path.lower().endswith(IMAGE_EXTENSIONS):
            watermark_image(file_path)
        elif file_path.lower().endswith(VIDEO_EXTENSIONS):
            watermark_video(file_path)
    else:
        print(f"[✘] INVALID signature — file is corrupted or tampered.")
        print(f"    File: {file_path}")
        write_certificate(file_path, sig_path, data, status="VERIFIED ✘ INVALID / TAMPERED")


# ---------------------------------------------------------
# 4. Check a file — QUICK version ("same file or different/edited?")
# ---------------------------------------------------------
def check_file(file_path: str, sig_path: str):
    ensure_keys()
    is_valid, data = _run_verification(file_path, sig_path)
    if is_valid is None:
        return

    print(f"Checking: {file_path}")
    print("-" * 50)
    if is_valid:
        print("Result   : ✅ SAME FILE - The file is authentic and matches the signed file.")
    else:
        print("Result   : ❌ DIFFERENT FILE - The file does not match the signed file.")


# ---------------------------------------------------------
# CLI entry point
# ---------------------------------------------------------
if __name__ == "__main__":
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)

    command = sys.argv[1].lower()

    if command == "generate":
        generate_keys()

    elif command == "sign":
        if len(sys.argv) < 3:
            print("Usage: python digital_signature.py sign <full_path_to_file>")
            sys.exit(1)
        sign_file(sys.argv[2])

    elif command == "verify":
        if len(sys.argv) < 4:
            print("Usage: python digital_signature.py verify <full_path_to_file> <full_path_to_.sig>")
            sys.exit(1)
        verify_file(sys.argv[2], sys.argv[3])

    elif command == "check":
        if len(sys.argv) < 4:
            print("Usage: python digital_signature.py check <full_path_to_file> <full_path_to_.sig>")
            sys.exit(1)
        check_file(sys.argv[2], sys.argv[3])

    else:
        print(f"Unknown command: {command}")
        print(__doc__)