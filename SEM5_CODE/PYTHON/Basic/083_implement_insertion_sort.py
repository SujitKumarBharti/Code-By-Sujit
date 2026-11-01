def insertion_sort(arr):
    for i in range(1, len(arr)):             # Iterate through loop
        key = arr[i]                         # Perform calculation
        j = i - 1                            # Perform calculation
        while j >= 0 and arr[j] > key:       # Iterate through loop
            arr[j + 1] = arr[j]              # Perform calculation
            j -= 1                           # Perform calculation
        arr[j + 1] = key                     # Perform calculation

arr = [12, 11, 13, 5, 6]                     # Perform calculation
print("Original:", arr)                      # Display implement Insertion Sort result
insertion_sort(arr)
print("Insertion Sorted:", arr)              # Display implement Insertion Sort result
