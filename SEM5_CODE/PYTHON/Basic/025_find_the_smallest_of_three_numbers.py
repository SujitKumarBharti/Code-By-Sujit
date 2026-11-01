try:
    a = float(input("Enter first number: "))   # Prompt user for input
    b = float(input("Enter second number: "))  # Prompt user for input
    c = float(input("Enter third number: "))   # Prompt user for input
    smallest = min(a, b, c)                    # Perform calculation
    print(f"Smallest number: {smallest}")      # Display find the smallest of three numbers result
except ValueError:                             # Handle invalid input error
    print("Invalid input.")                    # Display error message for invalid input
