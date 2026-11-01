def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def mod_inverse_bruteforce(a, m):
    a = a % m
    for x in range(1, m):
        if (a * x) % m == 1:
            return x
    return None

def extended_gcd(a, b):
    if a == 0:
        return b, 0, 1
    gcd_val, x1, y1 = extended_gcd(b % a, a)
    x = y1 - (b // a) * x1
    y = x1
    return gcd_val, x, y

def mod_inverse_extended_euclid(a, m):
    g, x, _ = extended_gcd(a, m)
    if g != 1:
        return None                                            # Inverse doesn't exist
    return (x % m + m) % m

def main():
    print("=== Modular Arithmetic Basics ===")
    m = 26                                                     # Standard alphabet modulus
    a = 7                                                      # Candidate key

    print(f"Modulus m = {m}, Key a = {a}")
    print(f"gcd({a}, {m}) = {gcd(a, m)} -> {'Coprime (Valid Key)' if gcd(a, m) == 1 else 'Not Coprime'}")

    inv_brute = mod_inverse_bruteforce(a, m)
    inv_euclid = mod_inverse_extended_euclid(a, m)

    print(f"Inverse of {a} mod {m} (Brute-force): {inv_brute}")
    print(f"Inverse of {a} mod {m} (Ext-Euclid) : {inv_euclid}")
    print(f"Verification: ({a} * {inv_euclid}) % {m} = {(a * inv_euclid) % m}")

    valid_keys = [k for k in range(1, 26) if gcd(k, 26) == 1]  # Showing all valid keys in Z_26 for multiplicative cipher
    print(f"\nAll valid keys in Z_26 for Affine/Multiplicative Ciphers:")
    print(valid_keys)

if __name__ == "__main__":
    main()
