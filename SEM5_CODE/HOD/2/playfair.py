def playfair():
    key = input("Enter key in uppercase: ").upper().replace("J", "I")
    choice = input("Enter e for Encrypt or d for Decrypt: ").lower()
    text = input("Enter text in uppercase: ").upper().replace("J", "I")

    alphabet = "ABCDEFGHIKLMNOPQRSTUVWXYZ"

    clean_key = ""
    for character in key:
        if character.isalpha() and character not in clean_key:
            clean_key += character

    letters = clean_key
    for character in alphabet:
        if character not in letters:
            letters += character

    matrix = []
    for i in range(0, 25, 5):
        matrix.append(letters[i:i + 5])

    print("\nPlayfair Matrix:")

    for row in matrix:
        print(" ".join(row))

    text = "".join(c for c in text if c.isalpha())

    if choice == "e":
        pairs = []
        i = 0

        while i < len(text):
            a = text[i]

            if i + 1 >= len(text):
                b = "X"
                i += 1
            elif text[i + 1] == a:
                b = "X"
                i += 1
            else:
                b = text[i + 1]
                i += 2

            pairs.append((a, b))

        shift = 1

    elif choice == "d":
        if len(text) % 2 != 0:
            print("Invalid ciphertext.")
            return

        pairs = []
        for i in range(0, len(text), 2):
            pairs.append((text[i], text[i + 1]))
        shift = -1

    else:
        print("Invalid choice")
        return

    result = ""

    for a, b in pairs:

        for r in range(5):
            for c in range(5):
                if matrix[r][c] == a:
                    ra, ca = r, c
                if matrix[r][c] == b:
                    rb, cb = r, c

        if ra == rb:
            result += matrix[ra][(ca + shift) % 5]
            result += matrix[rb][(cb + shift) % 5]

        elif ca == cb:
            result += matrix[(ra + shift) % 5][ca]
            result += matrix[(rb + shift) % 5][cb]

        else:
            result += matrix[ra][cb]
            result += matrix[rb][ca]

    print("Result:", result)


playfair()