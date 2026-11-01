try:
    n = int(input("Enter N: "))                              # Prompt user for input
    if n > 0:                                                # Check condition
        total = sum(range(1, n + 1))                         # Perform calculation
        print(f"Sum of first {n} natural numbers: {total}")  # Display find the sum of first N natural ... result
except ValueError:                                           # Handle invalid input error
    print("Invalid input.")                                  # Display error message for invalid input
