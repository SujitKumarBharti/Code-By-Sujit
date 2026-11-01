def fibonacci(n):
    if n <= 0:                                            # Check condition
        return 0
    if n == 1:                                            # Check condition
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

terms = 9                                                 # Perform calculation
print(f"Fibonacci series up to {terms} terms: ", end="")  # Display generate Fibonacci series using ... result
for i in range(terms):                                    # Iterate through loop
    print(fibonacci(i), end=" ")                          # Display generate Fibonacci series using ... result
print()                                                   # Display generate Fibonacci series using ... result
