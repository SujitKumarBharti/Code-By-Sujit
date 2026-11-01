arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]        # Perform calculation
even_count = sum(1 for x in arr if x % 2 == 0)
odd_count = len(arr) - even_count            # Perform calculation

print("Array:", arr)                         # Display count even and odd elements in a... result
print(f"Even count: {even_count}")           # Display count even and odd elements in a... result
print(f"Odd count : {odd_count}")            # Display count even and odd elements in a... result
