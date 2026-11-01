try:
    num = float(input("Enter a number: "))   # Prompt user for input
    if num > 0:                              # Check condition
        print(f"{num} is Positive.")         # Display check whether a number is positi... result
    elif num < 0:                            # Check condition
        print(f"{num} is Negative.")         # Display check whether a number is positi... result
    else:
        print("The number is Zero.")         # Display check whether a number is positi... result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
