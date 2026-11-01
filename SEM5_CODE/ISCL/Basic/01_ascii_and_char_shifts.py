def demonstrate_character_shifts():
    text = "HELLO WORLD"
    shift = 3                                   # Standard Caesar shift

    print(f"Original Text: {text}")
    print(f"Shift Value  : {shift}\n")

    shifted_chars = []                          # Step-by-step transformation
    for ch in text:
        if ch.isalpha():
            pos = ord(ch.upper()) - ord('A')    # 1. Convert to 0-25
            new_pos = (pos + shift) % 26        # 2. Apply shift with wrap-around
            new_char = chr(new_pos + ord('A'))  # 3. Convert back to ASCII char
            shifted_chars.append(new_char)
        else:
            shifted_chars.append(ch)

    encrypted = "".join(shifted_chars)
    print(f"Encrypted Text: {encrypted}")

    decrypted_chars = []                        # Decryption is shifting in reverse by -shift
    for ch in encrypted:
        if ch.isalpha():
            pos = ord(ch.upper()) - ord('A')
            original_pos = (pos - shift) % 26
            decrypted_chars.append(chr(original_pos + ord('A')))
        else:
            decrypted_chars.append(ch)

    decrypted = "".join(decrypted_chars)
    print(f"Decrypted Text: {decrypted}")

if __name__ == "__main__":
    demonstrate_character_shifts()
