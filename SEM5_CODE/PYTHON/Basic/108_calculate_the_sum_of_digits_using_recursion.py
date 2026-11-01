def sum_of_digits(n):
    if n == 0:                                                          # Check condition
        return 0
    return (n % 10) + sum_of_digits(n // 10)

num = 12345                                                             # Perform calculation
print(f"Sum of digits of {num} using recursion: {sum_of_digits(num)}")  # Display calculate the sum of digits usin... result
