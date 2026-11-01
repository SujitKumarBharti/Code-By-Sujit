def linear_search(arr, key):
    for idx, val in enumerate(arr):                # Iterate through loop
        if val == key:                             # Check condition
            return idx
    return -1

arr = [15, 23, 7, 42, 19, 8]                       # Perform calculation
key = 42                                           # Perform calculation
pos = linear_search(arr, key)                      # Perform calculation

if pos != -1:                                      # Check condition
    print(f"Element {key} found at index {pos}.")  # Display implement Linear Search result
else:
    print(f"Element {key} not found in array.")    # Display implement Linear Search result
