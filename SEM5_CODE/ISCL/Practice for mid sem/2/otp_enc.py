def otp_enc():
    text, key = "HELLO", "XMCKL"
    result = "".join(chr(((ord(text[i]) - 65) + (ord(key[i]) - 65)) % 26 + 65) for i in range(len(text)))

    print("Encrypted:", result)
