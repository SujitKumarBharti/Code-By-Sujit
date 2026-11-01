s = "Artificial Intelligence"                         # Perform calculation
vowels = 0                                            # Perform calculation
consonants = 0                                        # Perform calculation

for ch in s.lower():                                  # Iterate through loop
    if ch.isalpha():                                  # Check condition
        if ch in 'aeiou':                             # Check condition
            vowels += 1                               # Perform calculation
        else:
            consonants += 1                           # Perform calculation

print(f"String: '{s}'")                               # Display count vowels and consonants in a... result
print(f"Vowels: {vowels}, Consonants: {consonants}")  # Display count vowels and consonants in a... result
