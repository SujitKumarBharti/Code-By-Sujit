try:
    a = float(input("Enter first number: "))   # Prompt user for input
    b = float(input("Enter second number: "))  # Prompt user for input
    c = float(input("Enter third number: "))   # Prompt user for input
    avg = (a + b + c) / 3.0                    # Perform calculation
    print(f"Average: {avg:.2f}")               # Display calculate the average of three n... result
except ValueError:                             # Handle invalid input error
    print("Invalid input.")                    # Display error message for invalid input
