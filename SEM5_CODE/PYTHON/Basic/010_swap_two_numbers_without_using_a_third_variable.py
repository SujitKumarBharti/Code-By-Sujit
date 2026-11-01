try:
    a = int(input("Enter a: "))              # Prompt user for input
    b = int(input("Enter b: "))              # Prompt user for input
    print(f"Before swap: a = {a}, b = {b}")  # Display swap two numbers without using a... result
    a, b = b, a                              # Idiomatic Python swap
    print(f"After swap : a = {a}, b = {b}")  # Display swap two numbers without using a... result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
