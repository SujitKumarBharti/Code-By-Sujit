op = input("Enter operator (+, -, *, /): ").strip()  # Prompt user for input
try:
    a = float(input("Enter first number: "))         # Prompt user for input
    b = float(input("Enter second number: "))        # Prompt user for input

    match op:
        case '+':
            print(f"{a} + {b} = {a + b}")            # Display create a simple calculator using... result
        case '-':
            print(f"{a} - {b} = {a - b}")            # Display create a simple calculator using... result
        case '*':
            print(f"{a} * {b} = {a * b}")            # Display create a simple calculator using... result
        case '/':
            if b != 0:                               # Check condition
                print(f"{a} / {b} = {a / b}")        # Display create a simple calculator using... result
            else:
                print("Error: Division by zero!")    # Display error message for invalid input
        case _:
            print("Error: Invalid operator!")        # Display error message for invalid input
except ValueError:                                   # Handle invalid input error
    print("Invalid numerical input.")                # Display error message for invalid input
