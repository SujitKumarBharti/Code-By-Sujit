print("Prime numbers between 1 and 100:")    # Display print all prime numbers between ... result
for n in range(2, 101):                      # Iterate through loop
    is_prime = True                          # Perform calculation
    for i in range(2, int(n ** 0.5) + 1):    # Iterate through loop
        if n % i == 0:                       # Check condition
            is_prime = False                 # Perform calculation
            break
    if is_prime:                             # Check condition
        print(n, end=" ")                    # Display print all prime numbers between ... result
print()                                      # Display print all prime numbers between ... result
