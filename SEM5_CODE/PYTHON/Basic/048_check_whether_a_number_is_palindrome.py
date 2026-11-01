try:
    n = int(input("Enter an integer: "))        # Prompt user for input
    if n < 0:                                   # Check condition
        print(f"{n} is NOT a Palindrome.")      # Display check whether a number is palind... result
    else:
        s = str(n)                              # Perform calculation
        if s == s[::-1]:                        # Check condition
            print(f"{n} is a Palindrome.")      # Display check whether a number is palind... result
        else:
            print(f"{n} is NOT a Palindrome.")  # Display check whether a number is palind... result
except ValueError:                              # Handle invalid input error
    print("Invalid input.")                     # Display error message for invalid input
