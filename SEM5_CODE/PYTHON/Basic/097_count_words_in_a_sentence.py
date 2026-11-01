sentence = "Python is a versatile programming language for all domains"  # Perform calculation
words = 0                                                                # Perform calculation
in_word = False                                                          # Perform calculation

for ch in sentence:                                                      # Iterate through loop
    if ch not in (' ', '\t', '\n'):                                      # Check condition
        if not in_word:                                                  # Check condition
            words += 1                                                   # Perform calculation
            in_word = True                                               # Perform calculation
    else:
        in_word = False                                                  # Perform calculation

print(f"Sentence: '{sentence}'")                                         # Display count words in a sentence result
print(f"Word count: {words}")                                            # Display count words in a sentence result
