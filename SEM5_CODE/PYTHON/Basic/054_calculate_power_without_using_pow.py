try:
    base = float(input("Enter base: "))           # Prompt user for input
    exp = int(input("Enter integer exponent: "))  # Prompt user for input
    result = 1.0                                  # Perform calculation
    for _ in range(abs(exp)):                     # Iterate through loop
        result *= base                            # Perform calculation
    if exp < 0:                                   # Check condition
        result = 1.0 / result                     # Perform calculation
    print(f"{base} ^ {exp} = {result}")           # Display calculate power without using pow() result
except ValueError:                                # Handle invalid input error
    print("Invalid input.")                       # Display error message for invalid input
