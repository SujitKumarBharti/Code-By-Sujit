s = input("Enter a character: ")                        # Prompt user for input
if s:                                                   # Check condition
    ch = s[0]                                           # Perform calculation
    if ch.isupper():                                    # Check condition
        print(f"'{ch}' is an Uppercase letter.")        # Display check whether a character is upp... result
    elif ch.islower():                                  # Check condition
        print(f"'{ch}' is a Lowercase letter.")         # Display check whether a character is upp... result
    else:
        print(f"'{ch}' is not an alphabet character.")  # Display check whether a character is upp... result
