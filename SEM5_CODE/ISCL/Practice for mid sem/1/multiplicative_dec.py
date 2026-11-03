def multiplicative_dec():
    text, key = "XCZZU", 7
    key_inverse = pow(key, -1, 26)

    result = "".join(chr(((ord(char) - 65) * key_inverse) % 26 + 65) for char in text)

    print("Decrypted:", result)
