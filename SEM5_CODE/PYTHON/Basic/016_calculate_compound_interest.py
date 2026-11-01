try:
    p = float(input("Enter Principal: "))      # Prompt user for input
    r = float(input("Enter Rate (%): "))       # Prompt user for input
    t = float(input("Enter Time (years): "))   # Prompt user for input
    amount = p * ((1.0 + r / 100.0) ** t)      # Perform calculation
    ci = amount - p                            # Perform calculation
    print(f"Compound Interest: {ci:.2f}")      # Display calculate compound interest result
    print(f"Total Amount     : {amount:.2f}")  # Display calculate compound interest result
except ValueError:                             # Handle invalid input error
    print("Invalid input.")                    # Display error message for invalid input
