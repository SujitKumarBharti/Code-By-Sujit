s = "hello python world"                     # Perform calculation
uppercase_s = ""                             # Perform calculation

for ch in s:                                 # Iterate through loop
    if 'a' <= ch <= 'z':                     # Check condition
        uppercase_s += chr(ord(ch) - 32)     # Perform calculation
    else:
        uppercase_s += ch                    # Perform calculation

print("Original :", s)                       # Display convert lowercase letters into u... result
print("Uppercase:", uppercase_s)             # Display convert lowercase letters into u... result
