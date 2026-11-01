def binary_search(arr, key):
    low = 0                                        # Perform calculation
    high = len(arr) - 1                            # Perform calculation
    while low <= high:                             # Iterate through loop
        mid = (low + high) // 2                    # Perform calculation
        if arr[mid] == key:                        # Check condition
            return mid
        elif arr[mid] < key:                       # Check condition
            low = mid + 1                          # Perform calculation
        else:
            high = mid - 1                         # Perform calculation
    return -1

arr = [2, 5, 8, 12, 16, 23, 38, 56, 72, 91]        # Perform calculation
key = 23                                           # Perform calculation
pos = binary_search(arr, key)                      # Perform calculation

if pos != -1:                                      # Check condition
    print(f"Element {key} found at index {pos}.")  # Display implement Binary Search result
else:
    print(f"Element {key} not found.")             # Display implement Binary Search result
