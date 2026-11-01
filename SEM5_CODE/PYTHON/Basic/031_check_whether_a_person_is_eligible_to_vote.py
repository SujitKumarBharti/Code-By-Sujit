try:
    age = int(input("Enter your age: "))                               # Prompt user for input
    if age >= 18:                                                      # Check condition
        print("Eligible to vote.")                                     # Display check whether a person is eligib... result
    else:
        print(f"Not eligible to vote. Wait {18 - age} more year(s).")  # Display check whether a person is eligib... result
except ValueError:                                                     # Handle invalid input error
    print("Invalid age input.")                                        # Display error message for invalid input
