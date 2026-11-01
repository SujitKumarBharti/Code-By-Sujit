import math

try:
    a = int(input("Enter first number: "))             # Prompt user for input
    b = int(input("Enter second number: "))            # Prompt user for input
    print(f"GCD of {a} and {b} is: {math.gcd(a, b)}")  # Display find the GCD of two numbers result
except ValueError:                                     # Handle invalid input error
    print("Invalid input.")                            # Display error message for invalid input
