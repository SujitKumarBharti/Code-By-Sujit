def quick_sort(arr):
    if len(arr) <= 1:                        # Check condition
        return arr
    pivot = arr[len(arr) // 2]               # Perform calculation
    left = [x for x in arr if x < pivot]     # Perform calculation
    middle = [x for x in arr if x == pivot]
    right = [x for x in arr if x > pivot]    # Perform calculation
    return quick_sort(left) + middle + quick_sort(right)

arr = [10, 7, 8, 9, 1, 5]                    # Perform calculation
print("Original:", arr)                      # Display implement Quick Sort result
sorted_arr = quick_sort(arr)                 # Perform calculation
print("Quick Sorted:", sorted_arr)           # Display implement Quick Sort result
