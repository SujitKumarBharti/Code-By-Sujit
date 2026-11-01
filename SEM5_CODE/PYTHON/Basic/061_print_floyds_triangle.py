rows = 5                                     # Perform calculation
num = 1                                      # Perform calculation
for i in range(1, rows + 1):                 # Iterate through loop
    for _ in range(i):                       # Iterate through loop
        print(num, end=" ")                  # Display print Floyd's triangle result
        num += 1                             # Perform calculation
    print()                                  # Display print Floyd's triangle result
