def is_prime(n):
    if n <= 1:                               # Check condition
        return False
    for i in range(2, int(n ** 0.5) + 1):    # Iterate through loop
        if n % i == 0:                       # Check condition
            return False
    return True

num = 47                                     # Perform calculation
if is_prime(num):                            # Check condition
    print(f"{num} is a Prime number.")       # Display check prime number using a function result
else:
    print(f"{num} is NOT a Prime number.")   # Display check prime number using a function result
