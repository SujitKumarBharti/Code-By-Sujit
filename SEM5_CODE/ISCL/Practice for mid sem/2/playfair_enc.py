def playfair_enc():
    key, text = "MONARCHY", "INSTRUMENTS"
    chars = []
    for char in (key + "ABCDEFGHIKLMNOPQRSTUVWXYZ").replace("J", "I"):

        if char.isalpha() and char not in chars:
            chars.append(char)
    matrix = [chars[i:i + 5] for i in range(0, 25, 5)]
    pos = {matrix[r][c]: (r, c) for r in range(5) for c in range(5)}


    pairs, i, t = [], 0, text.replace("J", "I")
    while i < len(t):

        a = t[i]
        b = 'X' if (i + 1 == len(t) or a == t[i + 1]) else t[i + 1]
        pairs.append((a, b))
        i += 1 if b == 'X' else 2

    result = ""
    for a, b in pairs:
        r1, c1, r2, c2 = *pos[a], *pos[b]
        if r1 == r2:
            result += matrix[r1][(c1 + 1) % 5] + matrix[r2][(c2 + 1) % 5]

        elif c1 == c2:
            result += matrix[(r1 + 1) % 5][c1] + matrix[(r2 + 1) % 5][c2]

        else:
            result += matrix[r1][c2] + matrix[r2][c1]

    print("Encrypted:", result)
