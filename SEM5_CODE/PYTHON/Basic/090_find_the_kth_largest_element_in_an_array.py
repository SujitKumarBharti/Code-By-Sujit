arr = [12, 3, 5, 7, 19, 26, 4]                                    # Perform calculation
k = 3                                                             # Perform calculation

sorted_desc = sorted(arr, reverse=True)                           # Perform calculation
if 1 <= k <= len(sorted_desc):                                    # Check condition
    print(f"The {k}th largest element is: {sorted_desc[k - 1]}")  # Display find the Kth largest element in ... result
else:
    print("Invalid K.")                                           # Display error message for invalid input
