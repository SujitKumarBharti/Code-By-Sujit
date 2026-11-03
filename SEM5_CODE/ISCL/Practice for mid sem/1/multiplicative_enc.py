def multiplicative_enc():
    text, key = "HELLO", 7
    result = "".join(chr(((ord(char) - 65) * key) % 26 + 65) for char in text)

    print("Encrypted:", result)
