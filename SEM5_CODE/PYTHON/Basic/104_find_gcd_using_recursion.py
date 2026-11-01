def gcd(a, b):
    if b == 0:                                             # Check condition
        return a
    return gcd(b, a % b)

a = 48                                                     # Perform calculation
b = 18                                                     # Perform calculation
print(f"GCD of {a} and {b} using recursion: {gcd(a, b)}")  # Display find GCD using recursion result
