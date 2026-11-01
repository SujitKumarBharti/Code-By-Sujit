try:
    n = int(input("Enter an integer: "))                  # Prompt user for input
    if n % 5 == 0 and n % 11 == 0:                        # Check condition
        print(f"{n} is divisible by both 5 and 11.")      # Display check whether a number is divisi... result
    else:
        print(f"{n} is NOT divisible by both 5 and 11.")  # Display check whether a number is divisi... result
except ValueError:                                        # Handle invalid input error
    print("Invalid input.")                               # Display error message for invalid input
