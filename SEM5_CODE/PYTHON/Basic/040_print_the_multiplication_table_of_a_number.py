try:
    n = int(input("Enter a number: "))       # Prompt user for input
    for i in range(1, 11):                   # Iterate through loop
        print(f"{n} x {i:2d} = {n * i}")     # Display print the multiplication table o... result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
