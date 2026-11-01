try:
    n = int(input("Enter an integer: "))       # Prompt user for input
    if n <= 1:                                 # Check condition
        is_prime = False                       # Perform calculation
    else:
        is_prime = True                        # Perform calculation
        for i in range(2, int(n ** 0.5) + 1):  # Iterate through loop
            if n % i == 0:                     # Check condition
                is_prime = False               # Perform calculation
                break

    if is_prime:                               # Check condition
        print(f"{n} is a Prime number.")       # Display check whether a number is prime result
    else:
        print(f"{n} is NOT a Prime number.")   # Display check whether a number is prime result
except ValueError:                             # Handle invalid input error
    print("Invalid input.")                    # Display error message for invalid input
