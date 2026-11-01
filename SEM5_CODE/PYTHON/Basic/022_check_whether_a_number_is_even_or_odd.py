try:
    n = int(input("Enter an integer: "))     # Prompt user for input
    if n % 2 == 0:                           # Check condition
        print(f"{n} is Even.")               # Display check whether a number is even o... result
    else:
        print(f"{n} is Odd.")                # Display check whether a number is even o... result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
