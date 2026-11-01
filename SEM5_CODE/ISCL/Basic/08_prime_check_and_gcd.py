def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True
    if num % 2 == 0 or num % 3 == 0:
        return False
    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6
    return True

def gcd(a, b):
    while b != 0:
        a, b = b, a % b
    return a

def find_candidate_e_keys(phi):
    candidates = []
    for e in range(3, min(phi, 100), 2):     # Standard common values are 3, 5, 17, 65537
        if gcd(e, phi) == 1:
            candidates.append(e)
    return candidates

def main():
    print("=== Prime Numbers & Coprime Keys for RSA ===")
    p = 61
    q = 53

    print(f"p = {p} (Prime: {is_prime(p)})")
    print(f"q = {q} (Prime: {is_prime(q)})")

    n = p * q
    phi = (p - 1) * (q - 1)
    print(f"n = p * q = {n}")
    print(f"phi(n) = (p-1)*(q-1) = {phi}")

    suitable_e = find_candidate_e_keys(phi)
    print(f"Valid public exponents e coprime to phi({phi}): {suitable_e[:6]}")

    chosen_e = 17
    print(f"Selected e = {chosen_e}, gcd({chosen_e}, {phi}) = {gcd(chosen_e, phi)}")

if __name__ == "__main__":
    main()
