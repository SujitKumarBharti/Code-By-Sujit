def round_function_F(R_half, subkey):
    mixed = (R_half * 3 + subkey) & 0xFFFF                         # Simple substitution & diffusion for demo
    return ((mixed << 3) | (mixed >> 13)) & 0xFFFF                 # Circular shift 3 bits

def feistel_encrypt_block(block_32bit, round_keys):
    L = (block_32bit >> 16) & 0xFFFF                               # Split into 16-bit Left and Right halves
    R = block_32bit & 0xFFFF

    print(f"Initial: L0 = 0x{L:04X}, R0 = 0x{R:04X}")

    for round_num, k in enumerate(round_keys, start=1):
        f_out = round_function_F(R, k)
        new_R = L ^ f_out
        new_L = R
        L, R = new_L, new_R
        print(f"Round {round_num} (Key 0x{k:04X}): L{round_num} = 0x{L:04X}, R{round_num} = 0x{R:04X}")

    cipher_block = (R << 16) | L                                   # Recombine (R, L) after final round
    return cipher_block

def feistel_decrypt_block(cipher_32bit, round_keys):
    L = (cipher_32bit >> 16) & 0xFFFF                              # Split ciphertext block
    R = cipher_32bit & 0xFFFF

    for round_num, k in enumerate(reversed(round_keys), start=1):  # Apply keys in REVERSE order
        f_out = round_function_F(R, k)
        new_R = L ^ f_out
        new_L = R
        L, R = new_L, new_R

    recovered_block = (R << 16) | L
    return recovered_block

def main():
    print("=== Feistel Network Encryption & Decryption ===")
    sample_block = 0xABCD1234
    keys = [0x1111, 0x2222, 0x3333, 0x4444]                        # 4 round keys

    print(f"Plaintext Block: 0x{sample_block:08X}\n")

    ciphertext = feistel_encrypt_block(sample_block, keys)
    print(f"\nEncrypted Ciphertext: 0x{ciphertext:08X}\n")

    decrypted = feistel_decrypt_block(ciphertext, keys)
    print(f"Decrypted Plaintext : 0x{decrypted:08X}")
    print(f"Successfully Recovered: {decrypted == sample_block}")

if __name__ == "__main__":
    main()
