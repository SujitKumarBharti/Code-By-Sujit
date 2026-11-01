try:
    n = int(input("Enter N: "))                       # Prompt user for input
    a, b = 0, 1                                       # Perform calculation
    print(f"First {n} terms of Fibonacci: ", end="")  # Display print the first N terms of the F... result
    for _ in range(n):                                # Iterate through loop
        print(a, end=" ")                             # Display print the first N terms of the F... result
        a, b = b, a + b                               # Perform calculation
    print()                                           # Display print the first N terms of the F... result
except ValueError:                                    # Handle invalid input error
    print("Invalid input.")                           # Display error message for invalid input
