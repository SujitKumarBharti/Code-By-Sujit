try:
    a = float(input("Enter angle 1: "))                     # Prompt user for input
    b = float(input("Enter angle 2: "))                     # Prompt user for input
    c = float(input("Enter angle 3: "))                     # Prompt user for input

    if a > 0 and b > 0 and c > 0 and (a + b + c == 180.0):  # Check condition
        print("The triangle is VALID.")                     # Display check whether a triangle is valid result
    else:
        print("The triangle is INVALID.")                   # Display error message for invalid input
except ValueError:                                          # Handle invalid input error
    print("Invalid input.")                                 # Display error message for invalid input
