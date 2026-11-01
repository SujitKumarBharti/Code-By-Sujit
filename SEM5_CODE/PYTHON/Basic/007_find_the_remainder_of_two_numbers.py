try:
    a = int(input("Enter first integer: "))   # Prompt user for input
    b = int(input("Enter second integer: "))  # Prompt user for input
    if b != 0:                                # Check condition
        print(f"Remainder: {a % b}")          # Display find the remainder of two numbers result
    else:
        print("Error: Division by zero.")     # Display error message for invalid input
except ValueError:                            # Handle invalid input error
    print("Invalid integer input.")           # Display error message for invalid input
