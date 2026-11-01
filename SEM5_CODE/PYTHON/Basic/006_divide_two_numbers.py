try:
    a = float(input("Enter dividend: "))                # Prompt user for input
    b = float(input("Enter divisor: "))                 # Prompt user for input
    if b != 0:                                          # Check condition
        print(f"Quotient: {a / b}")                     # Display divide two numbers result
    else:
        print("Error: Division by zero is undefined.")  # Display error message for invalid input
except ValueError:                                      # Handle invalid input error
    print("Invalid numeric input.")                     # Display error message for invalid input
