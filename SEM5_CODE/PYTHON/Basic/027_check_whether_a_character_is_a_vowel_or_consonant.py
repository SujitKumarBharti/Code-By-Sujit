s = input("Enter an alphabet character: ")                # Prompt user for input
if s:                                                     # Check condition
    ch = s[0].lower()                                     # Perform calculation
    if ch.isalpha():                                      # Check condition
        if ch in ['a', 'e', 'i', 'o', 'u']:               # Check condition
            print(f"'{s[0]}' is a Vowel.")                # Display check whether a character is a v... result
        else:
            print(f"'{s[0]}' is a Consonant.")            # Display check whether a character is a v... result
    else:
        print(f"'{s[0]}' is not an alphabet character.")  # Display check whether a character is a v... result
