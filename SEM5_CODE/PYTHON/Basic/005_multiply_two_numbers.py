try:
    a = float(input("Enter first number: "))   # Prompt user for input
    b = float(input("Enter second number: "))  # Prompt user for input
    print(f"Product: {a * b}")                 # Display multiply two numbers result
except ValueError:                             # Handle invalid input error
    print("Invalid numeric input.")            # Display error message for invalid input
