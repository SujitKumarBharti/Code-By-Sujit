def additive_enc():
    text, key = "HELLO", 3
    result = "".join(chr((ord(char) - 65 + key) % 26 + 65) for char in text)

    print("Encrypted:", result)
