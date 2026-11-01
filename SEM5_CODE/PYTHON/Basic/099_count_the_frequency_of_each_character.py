s = "programming"                            # Perform calculation
freq = {}                                    # Perform calculation

for ch in s:                                 # Iterate through loop
    freq[ch] = freq.get(ch, 0) + 1           # Perform calculation

print(f"String: '{s}'")                      # Display count the frequency of each char... result
print("Character frequencies:")              # Display count the frequency of each char... result
for ch, count in freq.items():               # Iterate through loop
    print(f"  '{ch}' : {count}")             # Display count the frequency of each char... result
