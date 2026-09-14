def vernam():
    key = input("Enter key in uppercase: ").upper()
    choice = input("Enter e for Encrypt or d for Decrypt: ").lower()
    text = input("Enter text in uppercase: ").upper()

    if not key.isalpha() or (choice != "e" and choice != "d"):
        print("Invalid key.")
        return

    result = ""

    for i in range(len(text)):
        ch = text[i]
        if ch.isalpha():
            p = ord(ch) - 65
            k = ord(key[i % len(key)]) - 65

            if choice == "e":
                result += chr((p ^ k) + 65)
            else:
                result += chr((p ^ k) + 65)
        else:
            result += ch

    print("Result:", result)


vernam()