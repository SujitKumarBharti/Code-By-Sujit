def vernam_enc():
    text, key = "HELLO", "XYZAB"
    result = "".join(chr(((ord(text[i]) - 65) ^ (ord(key[i % len(key)]) - 65)) + 65) for i in range(len(text)))

    print("Encrypted:", result)
