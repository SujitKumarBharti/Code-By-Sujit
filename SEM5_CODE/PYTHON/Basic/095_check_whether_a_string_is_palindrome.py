s = "racecar"                                # Perform calculation
is_pal = True                                # Perform calculation
for i in range(len(s) // 2):                 # Iterate through loop
    if s[i] != s[len(s) - 1 - i]:            # Check condition
        is_pal = False                       # Perform calculation
        break

if is_pal:                                   # Check condition
    print(f"'{s}' is a Palindrome.")         # Display check whether a string is palind... result
else:
    print(f"'{s}' is NOT a Palindrome.")     # Display check whether a string is palind... result
