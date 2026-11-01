def selection_sort(arr):
    n = len(arr)                                     # Perform calculation
    for i in range(n - 1):                           # Iterate through loop
        min_idx = i                                  # Perform calculation
        for j in range(i + 1, n):                    # Iterate through loop
            if arr[j] < arr[min_idx]:                # Check condition
                min_idx = j                          # Perform calculation
        arr[i], arr[min_idx] = arr[min_idx], arr[i]  # Perform calculation

arr = [29, 10, 14, 37, 13]                           # Perform calculation
print("Original:", arr)                              # Display implement Selection Sort result
selection_sort(arr)
print("Selection Sorted:", arr)                      # Display implement Selection Sort result
