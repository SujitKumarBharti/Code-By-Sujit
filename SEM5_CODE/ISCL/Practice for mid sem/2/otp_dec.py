def otp_dec():
    text, key = "EQNVZ", "XMCKL"
    result = "".join(chr(((ord(text[i]) - 65) - (ord(key[i]) - 65)) % 26 + 65) for i in range(len(text)))

    print("Decrypted:", result)
