def vernam_dec():
    text, key = "Q]SLP", "XYZAB"
    result = "".join(chr(((ord(text[i]) - 65) ^ (ord(key[i % len(key)]) - 65)) + 65) for i in range(len(text)))

    print("Decrypted:", result)
