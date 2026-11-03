def affine_dec():
    text, a, b = "ZEBBW", 7, 2
    a_inverse = pow(a, -1, 26)

    result = "".join(chr((a_inverse * (ord(char) - 65 - b)) % 26 + 65) for char in text)

    print("Decrypted:", result)
