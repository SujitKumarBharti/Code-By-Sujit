DES_SBOX_1 = [                               # Standard DES S-Box 1 table (4 rows, 16 columns)
    [14,  4, 13,  1,  2, 15, 11,  8,  3, 10,  6, 12,  5,  9,  0,  7],
    [ 0, 15,  7,  4, 14,  2, 13,  1, 10,  6, 12, 11,  9,  5,  3,  8],
    [ 4,  1, 14,  8, 13,  6,  2, 11, 15, 12,  9,  7,  3, 10,  5,  0],
    [15, 12,  8,  2,  4,  9,  1,  7,  5, 11,  3, 14, 10,  0,  6, 13]
]

def sbox_lookup(six_bit_input, sbox_table):
    b1 = (six_bit_input >> 5) & 1            # Bit 1 (MSB) and Bit 6 (LSB) determine the row (0 to 3)
    b6 = six_bit_input & 1
    row = (b1 << 1) | b6

    col = (six_bit_input >> 1) & 0b1111      # Bits 2, 3, 4, 5 determine the column (0 to 15)

    val = sbox_table[row][col]               # Lookup 4-bit value
    return row, col, val

def demonstrate_expansion(four_bits):
    b1 = (four_bits >> 3) & 1
    b2 = (four_bits >> 2) & 1
    b3 = (four_bits >> 1) & 1
    b4 = four_bits & 1
    expanded = (b4 << 5) | (b1 << 4) | (b2 << 3) | (b3 << 2) | (b4 << 1) | b1
    return expanded

def main():
    print("=== DES S-Box 1 Lookup Walkthrough ===")
    test_input = 0b100110                    # 6-bit input: 38 decimal
    print(f"6-bit input: {test_input:06b} (decimal: {test_input})")

    row, col, output = sbox_lookup(test_input, DES_SBOX_1)
    print(f"  Outer bits (b1, b6) -> Row {row} (binary: {(row):02b})")
    print(f"  Inner bits (b2..b5) -> Col {col} (binary: {(col):04b})")
    print(f"  S-Box 1[{row}][{col}] Output: {output} (4-bit binary: {output:04b})")

    print("\n=== Expansion Permutation Demo ===")
    sample_4bit = 0b1011
    expanded_6bit = demonstrate_expansion(sample_4bit)
    print(f"Original 4 bits: {sample_4bit:04b}")
    print(f"Expanded 6 bits: {expanded_6bit:06b}")

if __name__ == "__main__":
    main()
