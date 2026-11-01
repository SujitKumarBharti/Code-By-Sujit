def bubble_sort(arr):
    n = len(arr)                                         # Perform calculation
    for i in range(n - 1):                               # Iterate through loop
        for j in range(n - i - 1):                       # Iterate through loop
            if arr[j] > arr[j + 1]:                      # Check condition
                arr[j], arr[j + 1] = arr[j + 1], arr[j]  # Perform calculation

arr = [64, 34, 25, 12, 22, 11, 90]                       # Perform calculation
print("Original:", arr)                                  # Display implement Bubble Sort result
bubble_sort(arr)
print("Bubble Sorted:", arr)                             # Display implement Bubble Sort result
