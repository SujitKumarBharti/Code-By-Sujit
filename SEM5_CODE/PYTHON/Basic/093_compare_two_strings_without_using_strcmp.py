s1 = "Hello"                                    # Perform calculation
s2 = "Hello"                                    # Perform calculation

equal = True                                    # Perform calculation
if len(s1) != len(s2):                          # Check condition
    equal = False                               # Perform calculation
else:
    for i in range(len(s1)):                    # Iterate through loop
        if s1[i] != s2[i]:                      # Check condition
            equal = False                       # Perform calculation
            break

if equal:                                       # Check condition
    print(f"'{s1}' and '{s2}' are EQUAL.")      # Display compare two strings without usin... result
else:
    print(f"'{s1}' and '{s2}' are NOT equal.")  # Display compare two strings without usin... result
