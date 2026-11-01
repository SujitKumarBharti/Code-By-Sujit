def rail_fence_encrypt(text, key=2):                        # Function definition
    rails = [[] for _ in range(key)]                        # Assign variable value
    rail = 0                                                # Assign variable value
    direction = 1                                           # Assign variable value
    for char in text:                                       # Iterate through loop
        rails[rail].append(char)
        rail += direction                                   # Assign variable value
        if rail == 0 or rail == key - 1:                    # Check condition
            direction = -direction                          # Assign variable value
    return "".join("".join(r) for r in rails)               # Return result

def rail_fence_decrypt(cipher, key=2):                      # Function definition
    pattern = [[None] * len(cipher) for _ in range(key)]    # Assign variable value
    rail, direction = 0, 1                                  # Assign variable value
    for i in range(len(cipher)):                            # Iterate through loop
        pattern[rail][i] = '*'                              # Assign variable value
        rail += direction                                   # Assign variable value
        if rail == 0 or rail == key - 1:                    # Check condition
            direction = -direction                          # Assign variable value
    idx = 0                                                 # Assign variable value
    for r in range(key):                                    # Iterate through loop
        for c in range(len(cipher)):                        # Iterate through loop
            if pattern[r][c] == '*' and idx < len(cipher):  # Check condition
                pattern[r][c] = cipher[idx]                 # Assign variable value
                idx += 1                                    # Assign variable value
    result = []                                             # Assign variable value
    rail, direction = 0, 1                                  # Assign variable value
    for i in range(len(cipher)):                            # Iterate through loop
        result.append(pattern[rail][i])
        rail += direction                                   # Assign variable value
        if rail == 0 or rail == key - 1:                    # Check condition
            direction = -direction                          # Assign variable value
    return "".join(result)                                  # Return result

text = "DEFENDTHEEAST"                                      # Assign variable value
enc = rail_fence_encrypt(text, 3)                           # Assign variable value
dec = rail_fence_decrypt(enc, 3)                            # Assign variable value
print(f"Original:  {text}")                                 # Display output result
print(f"Encrypted: {enc}")                                  # Display output result
print(f"Decrypted: {dec}")                                  # Display output result
