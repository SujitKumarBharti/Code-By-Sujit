arr = [12, 35, 1, 10, 34, 1]                      # Perform calculation
unique = sorted(set(arr))                         # Perform calculation
if len(unique) >= 2:                              # Check condition
    print("Array:", arr)                          # Display find the second-largest element ... result
    print("Second largest element:", unique[-2])  # Display find the second-largest element ... result
else:
    print("No distinct second largest element.")  # Display find the second-largest element ... result
