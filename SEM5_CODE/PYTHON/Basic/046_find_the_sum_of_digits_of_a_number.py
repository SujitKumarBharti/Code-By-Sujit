try:
    n = int(input("Enter an integer: "))              # Prompt user for input
    total = sum(int(digit) for digit in str(abs(n)))  # Perform calculation
    print(f"Sum of digits of {n}: {total}")           # Display find the sum of digits of a number result
except ValueError:                                    # Handle invalid input error
    print("Invalid input.")                           # Display error message for invalid input
