try:
    n = int(input("Enter an integer: "))     # Prompt user for input
    count = len(str(abs(n)))                 # Perform calculation
    print(f"Total digits in {n}: {count}")   # Display count the digits of a number result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
