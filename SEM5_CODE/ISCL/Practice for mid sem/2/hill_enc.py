def hill_enc():
    text = "HELP"
    key = [[3, 3], [2, 5]]

    result = ""
    for i in range(0, len(text), 2):
        x1, x2 = ord(text[i]) - 65, ord(text[i + 1]) - 65
        result += chr((key[0][0] * x1 + key[0][1] * x2) % 26 + 65)

        result += chr((key[1][0] * x1 + key[1][1] * x2) % 26 + 65)

    print("Encrypted:", result)
