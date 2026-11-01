import hashlib

def demonstrate_hash_algorithms(message):
    print(f"Input Message: '{message}'\n")

    md5_hash = hashlib.md5(message.encode()).hexdigest()        # MD5 (128-bit / 32 hex chars) - Legacy / Non-secure for new systems
    print(f"MD5    ({len(md5_hash)*4} bits): {md5_hash}")

    sha1_hash = hashlib.sha1(message.encode()).hexdigest()      # SHA-1 (160-bit / 40 hex chars)
    print(f"SHA-1  ({len(sha1_hash)*4} bits): {sha1_hash}")

    sha256_hash = hashlib.sha256(message.encode()).hexdigest()  # SHA-256 (256-bit / 64 hex chars) - Modern Standard
    print(f"SHA-256({len(sha256_hash)*4} bits): {sha256_hash}")

    return sha256_hash

def demonstrate_avalanche_effect():
    msg1 = "Transfer $100 to Alice"
    msg2 = "Transfer $101 to Alice"                             # Only 1 digit difference

    h1 = hashlib.sha256(msg1.encode()).hexdigest()
    h2 = hashlib.sha256(msg2.encode()).hexdigest()

    print("\n=== Avalanche Effect (1 Character Change) ===")
    print(f"Message 1: '{msg1}' -> {h1}")
    print(f"Message 2: '{msg2}' -> {h2}")

def convert_hash_to_integer_for_rsa(hash_hex, rsa_modulus_n):
    hash_int = int(hash_hex, 16)
    signable_int = hash_int % rsa_modulus_n
    return signable_int

def main():
    print("=== Cryptographic Hash Basics ===")
    sample_text = "Information Security and Cyber Laws"
    sha_digest = demonstrate_hash_algorithms(sample_text)
    demonstrate_avalanche_effect()

    rsa_n = 3233                                                # Demonstration of RSA digital signature prep
    signable = convert_hash_to_integer_for_rsa(sha_digest, rsa_n)
    print(f"\nHash as Integer Modulo n ({rsa_n}) for RSA Signing: {signable}")

if __name__ == "__main__":
    main()
