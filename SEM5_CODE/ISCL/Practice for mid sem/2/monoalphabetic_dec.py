def monoalphabetic_dec():
    text = "ITSSG"
    alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    key = "QWERTYUIOPASDFGHJKLZXCVBNM"

    result = "".join(alphabet[key.index(char)] for char in text)

    print("Decrypted:", result)
