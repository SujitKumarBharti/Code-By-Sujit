def factorial(n):
    if n <= 1:                                              # Check condition
        return 1
    return n * factorial(n - 1)

n = 6                                                       # Perform calculation
print(f"Factorial of {n} using recursion: {factorial(n)}")  # Display find factorial using recursion result
