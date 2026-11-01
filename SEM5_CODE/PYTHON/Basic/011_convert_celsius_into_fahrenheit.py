try:
    c = float(input("Enter temperature in Celsius: "))  # Prompt user for input
    f = (c * 9.0 / 5.0) + 32.0                          # Perform calculation
    print(f"{c:.2f} Celsius = {f:.2f} Fahrenheit")      # Display convert Celsius into Fahrenheit result
except ValueError:                                      # Handle invalid input error
    print("Invalid input.")                             # Display error message for invalid input
