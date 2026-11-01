try:
    n = int(input("Enter N: "))                           # Prompt user for input
    if n > 0:                                             # Check condition
        total = sum(range(2, n + 1, 2))                   # Perform calculation
        print(f"Sum of even numbers up to {n}: {total}")  # Display find the sum of even numbers fro... result
except ValueError:                                        # Handle invalid input error
    print("Invalid input.")                               # Display error message for invalid input
