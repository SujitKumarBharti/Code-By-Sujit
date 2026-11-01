try:
    p = float(input("Enter Principal: "))     # Prompt user for input
    r = float(input("Enter Rate (%): "))      # Prompt user for input
    t = float(input("Enter Time (years): "))  # Prompt user for input
    si = (p * r * t) / 100.0                  # Perform calculation
    print(f"Simple Interest: {si:.2f}")       # Display calculate simple interest result
except ValueError:                            # Handle invalid input error
    print("Invalid input.")                   # Display error message for invalid input
