try:
    a = int(input("Enter a: "))              # Prompt user for input
    b = int(input("Enter b: "))              # Prompt user for input
    print(f"Before swap: a = {a}, b = {b}")  # Display swap two numbers using a third v... result
    temp = a                                 # Perform calculation
    a = b                                    # Perform calculation
    b = temp                                 # Perform calculation
    print(f"After swap : a = {a}, b = {b}")  # Display swap two numbers using a third v... result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
