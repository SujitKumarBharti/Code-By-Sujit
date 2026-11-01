try:
    a = float(input("Enter first number: "))     # Prompt user for input
    b = float(input("Enter second number: "))    # Prompt user for input
    if a > b:                                    # Check condition
        print(f"{a} is larger than {b}")         # Display find the largest of two numbers result
    elif b > a:                                  # Check condition
        print(f"{b} is larger than {a}")         # Display find the largest of two numbers result
    else:
        print(f"Both numbers are equal ({a}).")  # Display find the largest of two numbers result
except ValueError:                               # Handle invalid input error
    print("Invalid input.")                      # Display error message for invalid input
