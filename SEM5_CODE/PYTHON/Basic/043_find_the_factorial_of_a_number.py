try:
    n = int(input("Enter a non-negative integer: "))             # Prompt user for input
    if n < 0:                                                    # Check condition
        print("Factorial is not defined for negative numbers.")  # Display find the factorial of a number result
    else:
        fact = 1                                                 # Perform calculation
        for i in range(1, n + 1):                                # Iterate through loop
            fact *= i                                            # Perform calculation
        print(f"Factorial of {n} = {fact}")                      # Display find the factorial of a number result
except ValueError:                                               # Handle invalid input error
    print("Invalid input.")                                      # Display error message for invalid input
