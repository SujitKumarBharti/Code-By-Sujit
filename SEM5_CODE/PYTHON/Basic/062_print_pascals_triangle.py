rows = 5                                     # Perform calculation
for i in range(rows):                        # Iterate through loop
    val = 1                                  # Perform calculation
    print(" " * (rows - i), end="")          # Display print Pascal's triangle result
    for j in range(i + 1):                   # Iterate through loop
        print(val, end=" ")                  # Display print Pascal's triangle result
        val = val * (i - j) // (j + 1)       # Perform calculation
    print()                                  # Display print Pascal's triangle result
