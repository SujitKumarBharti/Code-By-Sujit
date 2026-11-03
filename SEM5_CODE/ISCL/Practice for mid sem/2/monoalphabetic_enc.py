def monoalphabetic_enc():
    text = "HELLO"
    alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    key = "QWERTYUIOPASDFGHJKLZXCVBNM"

    result = "".join(key[alphabet.index(char)] for char in text)

    print("Encrypted:", result)
