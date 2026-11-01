def clean_alphabetic_text(text, replace_j=False):
    cleaned = "".join([ch.upper() for ch in text if ch.isalpha()])
    if replace_j:
        cleaned = cleaned.replace("J", "I")
    return cleaned

def prepare_playfair_digraphs(cleaned_text):
    digraphs = []
    i = 0
    while i < len(cleaned_text):
        c1 = cleaned_text[i]
        if i + 1 < len(cleaned_text):
            c2 = cleaned_text[i + 1]
            if c1 == c2:
                digraphs.append((c1, 'X'))
                i += 1
            else:
                digraphs.append((c1, c2))
                i += 2
        else:
            digraphs.append((c1, 'X'))
            i += 1
    return digraphs

def pad_to_block_size(text, block_size, pad_char='X'):
    remainder = len(text) % block_size
    if remainder != 0:
        padding_needed = block_size - remainder
        text += pad_char * padding_needed
    return text

def demonstrate_pkcs7_padding(raw_bytes, block_size=8):
    pad_len = block_size - (len(raw_bytes) % block_size)
    padded = raw_bytes + bytes([pad_len]) * pad_len
    return padded

def main():
    sample = "Hello World! Fall tree."
    print(f"Original Text: {sample}")

    cleaned = clean_alphabetic_text(sample, replace_j=True)
    print(f"Cleaned (A-Z, J->I): {cleaned}")

    digraphs = prepare_playfair_digraphs(cleaned)
    print(f"Playfair Digraphs: {digraphs}")

    padded_hill = pad_to_block_size(cleaned, block_size=3)
    print(f"Padded to block size 3 (for Hill): {padded_hill}")

    sample_bytes = b"Secret"
    padded_des = demonstrate_pkcs7_padding(sample_bytes, block_size=8)
    print(f"PKCS                             # 7 Byte Padding (for DES): {padded_des} (length: {len(padded_des)})")

if __name__ == "__main__":
    main()
