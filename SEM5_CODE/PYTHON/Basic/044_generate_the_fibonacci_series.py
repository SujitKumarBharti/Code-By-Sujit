try:
    n = int(input("Enter number of terms: "))  # Prompt user for input
    a, b = 0, 1                                # Perform calculation
    print("Fibonacci series: ", end="")        # Display generate the Fibonacci series result
    for _ in range(n):                         # Iterate through loop
        print(a, end=" ")                      # Display generate the Fibonacci series result
        a, b = b, a + b                        # Perform calculation
    print()                                    # Display generate the Fibonacci series result
except ValueError:                             # Handle invalid input error
    print("Invalid input.")                    # Display error message for invalid input
