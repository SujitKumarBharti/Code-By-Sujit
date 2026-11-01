import math

try:
    a = int(input("Enter first number: "))   # Prompt user for input
    b = int(input("Enter second number: "))  # Prompt user for input
    lcm = abs(a * b) // math.gcd(a, b) if math.gcd(a, b) != 0 else 0
    print(f"LCM of {a} and {b} is: {lcm}")   # Display find the LCM of two numbers result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
