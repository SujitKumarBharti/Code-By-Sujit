def power(base, exp):
    if exp == 0:                                               # Check condition
        return 1.0
    if exp < 0:                                                # Check condition
        return 1.0 / power(base, -exp)
    return base * power(base, exp - 1)

base = 2.0                                                     # Perform calculation
exp = 5                                                        # Perform calculation
print(f"{base} ^ {exp} using recursion = {power(base, exp)}")  # Display find power using recursion result
