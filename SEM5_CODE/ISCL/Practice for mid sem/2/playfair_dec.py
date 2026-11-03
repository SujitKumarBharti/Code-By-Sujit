def playfair_dec():
    key, text = "MONARCHY", "GATLMZCLRQXA"
    chars = []
    for char in (key + "ABCDEFGHIKLMNOPQRSTUVWXYZ").replace("J", "I"):

        if char.isalpha() and char not in chars:
            chars.append(char)
    matrix = [chars[i:i + 5] for i in range(0, 25, 5)]
    pos = {matrix[r][c]: (r, c) for r in range(5) for c in range(5)}


    result = ""
    for i in range(0, len(text), 2):
        r1, c1, r2, c2 = *pos[text[i]], *pos[text[i + 1]]
        if r1 == r2:
            result += matrix[r1][(c1 - 1) % 5] + matrix[r2][(c2 - 1) % 5]

        elif c1 == c2:
            result += matrix[(r1 - 1) % 5][c1] + matrix[(r2 - 1) % 5][c2]

        else:
            result += matrix[r1][c2] + matrix[r2][c1]

    print("Decrypted:", result)
