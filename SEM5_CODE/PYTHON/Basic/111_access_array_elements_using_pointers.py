arr = [11, 22, 33, 44, 55]                                   # Perform calculation
it = iter(arr)                                               # Perform calculation

print("Accessing elements via iterator (pointer concept):")  # Display access array elements using poin... result
try:
    while True:                                              # Iterate through loop
        elem = next(it)                                      # Perform calculation
        print("Element:", elem)                              # Display access array elements using poin... result
except StopIteration:                                        # Handle invalid input error
    print("Reached end of array.")                           # Display access array elements using poin... result
