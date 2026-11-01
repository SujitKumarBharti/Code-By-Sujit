def permute(input_sequence, permutation_table):
    return [input_sequence[idx] for idx in permutation_table]

def inverse_permutation_table(table):
    inv = [0] * len(table)
    for target_pos, src_pos in enumerate(table):
        inv[src_pos] = target_pos
    return inv

def simple_columnar_transposition(text, key):
    num_cols = len(key)
    pad_len = (num_cols - (len(text) % num_cols)) % num_cols                # Pad text so it fits exact grid
    padded = text + "X" * pad_len

    grid = [padded[i:i+num_cols] for i in range(0, len(padded), num_cols)]  # Create rows

    col_order = sorted(range(num_cols), key=lambda c: key[c])               # Determine column order from sorted key characters

    ciphertext = ""                                                         # Read columns in sorted order
    for c in col_order:
        for row in grid:
            ciphertext += row[c]

    return ciphertext, grid, col_order

def main():
    print("=== Fixed Permutation Demo (DES-style) ===")
    sample_bits = [1, 0, 1, 1, 0, 0, 1, 0]                                  # 8 bits
    p_table = [3, 0, 2, 7, 5, 1, 6, 4]                                      # Permutation table reordering 8 bits
    p_inv = inverse_permutation_table(p_table)

    permuted = permute(sample_bits, p_table)
    restored = permute(permuted, p_inv)

    print(f"Original Bits : {sample_bits}")
    print(f"Permuted Bits : {permuted}")
    print(f"Restored Bits : {restored} (Matches: {restored == sample_bits})")

    print("\n=== Columnar Transposition Demo ===")
    plain = "DEFENDTHEFORT"
    key = "HACK"
    cipher, grid, order = simple_columnar_transposition(plain, key)

    print(f"Plaintext: {plain}, Key: {key}")
    print("Grid (Row by Row):")
    for r in grid:
        print("  " + " ".join(r))
    print(f"Sorted Column Order: {order}")
    print(f"Transposed Cipher  : {cipher}")

if __name__ == "__main__":
    main()
