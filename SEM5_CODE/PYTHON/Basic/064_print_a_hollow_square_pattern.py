size = 5                                                        # Perform calculation
for i in range(size):                                           # Iterate through loop
    for j in range(size):                                       # Iterate through loop
        if i == 0 or i == size - 1 or j == 0 or j == size - 1:  # Check condition
            print("* ", end="")                                 # Display print a hollow square pattern result
        else:
            print("  ", end="")                                 # Display print a hollow square pattern result
    print()                                                     # Display print a hollow square pattern result
