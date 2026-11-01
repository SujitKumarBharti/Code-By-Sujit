try:
    n = int(input("Enter an integer: "))     # Prompt user for input
    sign = -1 if n < 0 else 1                # Perform calculation
    rev = int(str(abs(n))[::-1]) * sign      # Perform calculation
    print(f"Reversed number: {rev}")         # Display reverse a number result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
