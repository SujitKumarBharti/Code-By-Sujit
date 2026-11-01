arr = [4, 2, 7, 2, 8, 4, 3, 1]                                      # Perform calculation
arr.sort()

duplicates = []                                                     # Perform calculation
i = 0                                                               # Perform calculation
while i < len(arr) - 1:                                             # Iterate through loop
    if arr[i] == arr[i + 1]:                                        # Check condition
        duplicates.append(arr[i])
        while i < len(arr) - 1 and arr[i] == arr[i + 1]:            # Iterate through loop
            i += 1                                                  # Perform calculation
    i += 1                                                          # Perform calculation

print("Sorted array:", arr)                                         # Display find duplicate elements using so... result
print("Duplicate elements:", duplicates if duplicates else "None")  # Display find duplicate elements using so... result
