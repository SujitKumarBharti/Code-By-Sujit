def square_and_multiply(base, exponent, modulus):
    result = 1
    base = base % modulus
    while exponent > 0:
        if exponent % 2 == 1:                # If exponent is odd, multiply base with result
            result = (result * base) % modulus
        exponent = exponent >> 1             # exponent must be even now
        base = (base * base) % modulus
    return result

def main():
    print("=== Modular Exponentiation Comparison ===")
    base = 5
    exp = 117
    mod = 23

    manual_res = square_and_multiply(base, exp, mod)
    builtin_res = pow(base, exp, mod)
    print(f"({base} ** {exp}) % {mod}:")
    print(f"  Manual Square & Multiply: {manual_res}")
    print(f"  Python Built-in pow()   : {builtin_res}\n")

    print("=== Diffie-Hellman Key Exchange Walkthrough ===")
    p = 23                                   # Public parameters
    g = 5                                    # Primitive root modulo 23

    print(f"Public Parameters: Prime p = {p}, Generator g = {g}")

    a_private = 6                            # Private keys
    b_private = 15                           # Bob's private key
    print(f"Alice's Private Key 'a': {a_private}")
    print(f"Bob's Private Key 'b'  : {b_private}")

    A_public = pow(g, a_private, p)          # Public keys exchanged over insecure network
    B_public = pow(g, b_private, p)          # Bob -> Alice
    print(f"\nExchanged Public Values:")
    print(f"  Alice sends A = (g^a) % p = {A_public}")
    print(f"  Bob sends B   = (g^b) % p = {B_public}")

    k_alice = pow(B_public, a_private, p)    # Computing shared secret key
    k_bob = pow(A_public, b_private, p)
    print(f"\nComputed Shared Symmetric Keys:")
    print(f"  Alice's computed key: {k_alice}")
    print(f"  Bob's computed key  : {k_bob}")
    print(f"  Shared Secret Match : {k_alice == k_bob}")

if __name__ == "__main__":
    main()
