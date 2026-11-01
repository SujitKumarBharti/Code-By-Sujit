def merge_sort(arr):
    if len(arr) <= 1:                        # Check condition
        return arr
    mid = len(arr) // 2                      # Perform calculation
    left = merge_sort(arr[:mid])             # Perform calculation
    right = merge_sort(arr[mid:])            # Perform calculation
    return merge(left, right)

def merge(left, right):
    result = []                              # Perform calculation
    i = j = 0                                # Perform calculation
    while i < len(left) and j < len(right):  # Iterate through loop
        if left[i] <= right[j]:              # Check condition
            result.append(left[i])
            i += 1                           # Perform calculation
        else:
            result.append(right[j])
            j += 1                           # Perform calculation
    result.extend(left[i:])
    result.extend(right[j:])
    return result

arr = [38, 27, 43, 3, 9, 82, 10]             # Perform calculation
print("Original:", arr)                      # Display implement Merge Sort result
sorted_arr = merge_sort(arr)                 # Perform calculation
print("Merge Sorted:", sorted_arr)           # Display implement Merge Sort result
