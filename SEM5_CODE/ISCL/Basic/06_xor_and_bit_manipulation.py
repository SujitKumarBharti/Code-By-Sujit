def string_to_bits(text):
    return "".join(f"{ord(c):08b}" for c in text)

def bits_to_string(bits):
    chars = [chr(int(bits[i:i+8], 2)) for i in range(0, len(bits), 8)]
    return "".join(chars)

def xor_bytes(data_bytes, key_bytes):
    return bytes([b1 ^ b2 for b1, b2 in zip(data_bytes, key_bytes)])

def circular_left_shift(val, shift_bits, total_bits=28):
    mask = (1 << total_bits) - 1
    return ((val << shift_bits) | (val >> (total_bits - shift_bits))) & mask

def main():
    print("=== Bitwise XOR & Binary Representations ===")
    message = "ANT"
    key = "XYZ"

    msg_bytes = message.encode()
    key_bytes = key.encode()

    print(f"Message: {message} -> Bytes: {list(msg_bytes)} -> Hex: {msg_bytes.hex()}")
    print(f"Key    : {key} -> Bytes: {list(key_bytes)} -> Hex: {key_bytes.hex()}")

    cipher_bytes = xor_bytes(msg_bytes, key_bytes)        # Encryption: C = M ^ K
    print(f"\nEncrypted (Hex): {cipher_bytes.hex()}")

    decrypted_bytes = xor_bytes(cipher_bytes, key_bytes)  # Decryption: M = C ^ K
    print(f"Decrypted Text : {decrypted_bytes.decode()}")

    print("\n=== Circular Bit Shift Demo (DES Key Schedule) ===")
    sample_val = 0b1000000000000000000000000001
    shifted_1 = circular_left_shift(sample_val, shift_bits=1, total_bits=28)
    print(f"Original 28 bits: {sample_val:028b}")
    print(f"Shifted by 1 bit: {shifted_1:028b}")

if __name__ == "__main__":
    main()
