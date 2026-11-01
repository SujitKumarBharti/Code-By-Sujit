arr = [15, 23, 7, 42, 19, 8]                       # Perform calculation
key = 42                                           # Perform calculation

pos = -1                                           # Perform calculation
for i, val in enumerate(arr):                      # Iterate through loop
    if val == key:                                 # Check condition
        pos = i                                    # Perform calculation
        break

if pos != -1:                                      # Check condition
    print(f"Element {key} found at index {pos}.")  # Display search an element using Linear S... result
else:
    print(f"Element {key} not found in array.")    # Display search an element using Linear S... result
