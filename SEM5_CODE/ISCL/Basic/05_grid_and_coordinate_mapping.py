def generate_5x5_key_matrix(keyword):
    matrix = []
    seen = set()

    key_chars = []                                                 # Normalize keyword
    for ch in keyword.upper():
        if ch.isalpha():
            ch = 'I' if ch == 'J' else ch
            if ch not in seen:
                seen.add(ch)
                key_chars.append(ch)

    for code in range(ord('A'), ord('Z') + 1):                     # Fill remaining alphabet
        ch = chr(code)
        if ch == 'J':
            continue
        if ch not in seen:
            seen.add(ch)
            key_chars.append(ch)

    for i in range(0, 25, 5):                                      # Reshape into 5x5
        matrix.append(key_chars[i:i+5])

    return matrix

def find_position(matrix, char):
    char = 'I' if char == 'J' else char
    for r in range(5):
        for c in range(5):
            if matrix[r][c] == char:
                return r, c
    return None

def encrypt_pair(matrix, char1, char2):
    r1, c1 = find_position(matrix, char1)
    r2, c2 = find_position(matrix, char2)

    if r1 == r2:
        return matrix[r1][(c1 + 1) % 5], matrix[r2][(c2 + 1) % 5]  # Same row -> shift right
    elif c1 == c2:
        return matrix[(r1 + 1) % 5][c1], matrix[(r2 + 1) % 5][c2]  # Same column -> shift down
    else:
        return matrix[r1][c2], matrix[r2][c1]                      # Rectangle -> swap columns

def main():
    keyword = "MONARCHY"
    matrix = generate_5x5_key_matrix(keyword)

    print(f"=== 5x5 Grid for Keyword '{keyword}' ===")
    for row in matrix:
        print("  " + " ".join(row))

    test_pairs = [('I', 'N'), ('B', 'A'), ('E', 'M')]
    print("\nDemonstrating Pair Rules:")
    for c1, c2 in test_pairs:
        enc1, enc2 = encrypt_pair(matrix, c1, c2)
        r1, c1_pos = find_position(matrix, c1)
        r2, c2_pos = find_position(matrix, c2)
        rel = "Same Row" if r1 == r2 else ("Same Col" if c1_pos == c2_pos else "Rectangle")
        print(f"  ({c1}, {c2}) [{rel}] -> ({enc1}, {enc2})")

if __name__ == "__main__":
    main()
