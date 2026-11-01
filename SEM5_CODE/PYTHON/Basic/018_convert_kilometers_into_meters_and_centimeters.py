try:
    km = float(input("Enter distance in kilometers: "))                  # Prompt user for input
    meters = km * 1000.0                                                 # Perform calculation
    cm = km * 100000.0                                                   # Perform calculation
    print(f"{km:.2f} km = {meters:.2f} meters = {cm:.2f} centimeters.")  # Display convert kilometers into meters a... result
except ValueError:                                                       # Handle invalid input error
    print("Invalid input.")                                              # Display error message for invalid input
