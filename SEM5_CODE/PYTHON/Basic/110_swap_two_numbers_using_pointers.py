def swap_in_place(lst, i, j):
    lst[i], lst[j] = lst[j], lst[i]          # Perform calculation

numbers = [50, 90]                           # Perform calculation
print("Before swap:", numbers)               # Display swap two numbers using pointers ... result
swap_in_place(numbers, 0, 1)
print("After swap :", numbers)               # Display swap two numbers using pointers ... result
