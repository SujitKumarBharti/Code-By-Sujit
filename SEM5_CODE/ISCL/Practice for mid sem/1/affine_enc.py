def affine_enc():
    text, a, b = "HELLO", 7, 2
    result = "".join(chr((a * (ord(char) - 65) + b) % 26 + 65) for char in text)

    print("Encrypted:", result)
