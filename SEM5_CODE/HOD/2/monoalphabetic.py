def monoalphabetic():
    key = input("Enter 26-letter key in uppercase: ").upper()
    choice = input("Enter e for Encrypt or d for Decrypt: ").lower()
    text = input("Enter text in uppercase: ").upper()
    alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    unique_letters = ""
    for letter in key:
        if letter not in unique_letters:
            unique_letters += letter
    if len(key) != 26 or len(unique_letters) != 26 or not key.isalpha():
        print("Invalid key. Enter 26 unique letters.")
        return
    if choice == "e":
        source = alphabet
        target = key
    elif choice == "d":
        source = key
        target = alphabet
    else:
        print("Invalid choice")
        return
    result = ""
    for ch in text:
        if ch.isalpha():
            result += target[source.index(ch)]
        else:
            result += ch
    print("Result:", result)
monoalphabetic()