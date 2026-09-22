def double_columnar():
    key1 = read_key("Enter first key: ")
    key2 = read_key("Enter second key: ")
    if key1 is None or key2 is None:
        return
    choice = input("Enter e for Encrypt or d for Decrypt: ").lower()
    text = input("Enter text in uppercase: ").replace(" ", "")
    def encrypt(text, key):
        cols = len(key)
        while len(text) % cols != 0:
            text += "X"
        rows = [
            text[i:i + cols]
            for i in range(0, len(text), cols)
        ]
        result = ""
        for number in sorted(key):
            col = key.index(number)
            for row in rows:
                result += row[col]
        return result
    def decrypt(text, key):
        cols = len(key)
        rows_count = len(text) // cols
        matrix = [[""] * cols for _ in range(rows_count)]
        index = 0
        for number in sorted(key):
            col = key.index(number)
            for row in range(rows_count):
                matrix[row][col] = text[index]
                index += 1
        return "".join("".join(row) for row in matrix)
    if choice == "e":
        first = encrypt(text, key1)
        result = encrypt(first, key2)
    elif choice == "d":
        first = decrypt(text, key2)
        result = decrypt(first, key1)
    else:
        print("Invalid choice")
        return
    print("Result:", result)
def read_key(message):
    parts = input(message).split()
    key = []
    for part in parts:
        try:
            key.append(int(part))
        except ValueError:
            print("Key must contain numbers only.")
            return None
    if len(key) == 0 or sorted(key) != list(range(1, len(key) + 1)):
        print("Key must contain numbers from 1 to its length.")
        return None
    return key
double_columnar()