def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def mod_inverse(a, m=26):
    a = a % m
    for x in range(1, m):
        if (a * x) % m == 1:
            return x
    return None

def matrix_determinant_2x2(matrix):
    a, b = matrix[0]
    c, d = matrix[1]
    return (a * d - b * c) % 26

def matrix_inverse_2x2(matrix):
    det = matrix_determinant_2x2(matrix)
    det_inv = mod_inverse(det, 26)
    if det_inv is None:
        raise ValueError(f"Matrix is singular or not invertible mod 26 (det={det}, gcd(det,26)={gcd(det,26)})")

    a, b = matrix[0]
    c, d = matrix[1]

    inv_00 = (d * det_inv) % 26                        # Inverse = det_inv * [[d, -b], [-c, a]] mod 26
    inv_01 = ((-b % 26) * det_inv) % 26
    inv_10 = ((-c % 26) * det_inv) % 26
    inv_11 = (a * det_inv) % 26

    return [[inv_00, inv_01], [inv_10, inv_11]]

def matrix_vector_mult_mod26(matrix, vector):
    res0 = (matrix[0][0] * vector[0] + matrix[0][1] * vector[1]) % 26
    res1 = (matrix[1][0] * vector[0] + matrix[1][1] * vector[1]) % 26
    return [res0, res1]

def main():
    print("=== Matrix Operations Modulo 26 ===")
    key_matrix = [[3, 3], [2, 5]]                      # Common Hill Cipher Key: [[3, 3], [2, 5]]
    print(f"Key Matrix K:\n  [{key_matrix[0][0]}, {key_matrix[0][1]}]\n  [{key_matrix[1][0]}, {key_matrix[1][1]}]")

    det = matrix_determinant_2x2(key_matrix)
    det_inv = mod_inverse(det, 26)
    print(f"Determinant mod 26: {det}")
    print(f"det_inv mod 26    : {det_inv}")

    inv_matrix = matrix_inverse_2x2(key_matrix)
    print(f"Inverse Key Matrix K^(-1) mod 26:\n  [{inv_matrix[0][0]}, {inv_matrix[0][1]}]\n  [{inv_matrix[1][0]}, {inv_matrix[1][1]}]")

    plaintext_vector = [ord('H') - 65, ord('E') - 65]  # Sample encryption of digraph 'HE' -> [7, 4]
    print(f"\nPlaintext Vector 'HE': {plaintext_vector}")

    cipher_vector = matrix_vector_mult_mod26(key_matrix, plaintext_vector)
    cipher_chars = "".join([chr(c + 65) for c in cipher_vector])
    print(f"Cipher Vector        : {cipher_vector} -> '{cipher_chars}'")

    decrypted_vector = matrix_vector_mult_mod26(inv_matrix, cipher_vector)
    decrypted_chars = "".join([chr(d + 65) for d in decrypted_vector])
    print(f"Decrypted Vector     : {decrypted_vector} -> '{decrypted_chars}'")

if __name__ == "__main__":
    main()
