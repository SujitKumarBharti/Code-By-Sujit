try:
    n = int(input("Enter an integer: "))               # Prompt user for input
    if n < 0:                                          # Check condition
        print(f"{n} is NOT an Armstrong number.")      # Display check whether a number is Armstrong result
    else:
        s = str(n)                                     # Perform calculation
        digits = len(s)                                # Perform calculation
        total = sum(int(d) ** digits for d in s)       # Perform calculation
        if total == n:                                 # Check condition
            print(f"{n} is an Armstrong number.")      # Display check whether a number is Armstrong result
        else:
            print(f"{n} is NOT an Armstrong number.")  # Display check whether a number is Armstrong result
except ValueError:                                     # Handle invalid input error
    print("Invalid input.")                            # Display error message for invalid input
