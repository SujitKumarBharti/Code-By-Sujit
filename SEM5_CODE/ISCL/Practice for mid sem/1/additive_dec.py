def additive_dec():
    text, key = "KHOOR", 3
    result = "".join(chr((ord(char) - 65 - key) % 26 + 65) for char in text)

    print("Decrypted:", result)
