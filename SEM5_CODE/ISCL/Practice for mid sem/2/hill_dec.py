def hill_dec():
    text = "HIAT"
    inv_key = [[15, 17], [20, 9]]

    result = ""
    for i in range(0, len(text), 2):
        y1, y2 = ord(text[i]) - 65, ord(text[i + 1]) - 65
        result += chr((inv_key[0][0] * y1 + inv_key[0][1] * y2) % 26 + 65)

        result += chr((inv_key[1][0] * y1 + inv_key[1][1] * y2) % 26 + 65)

    print("Decrypted:", result)
