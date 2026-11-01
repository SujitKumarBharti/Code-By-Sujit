def caesar_encrypt(text, shift=3):                             # Function definition
    result = ""                                                # Assign variable value
    for char in text:                                          # Iterate through loop
        if char.isupper():                                     # Check condition
            result += chr((ord(char) - 65 + shift) % 26 + 65)  # Assign variable value
        elif char.islower():                                   # Check condition
            result += chr((ord(char) - 97 + shift) % 26 + 97)  # Assign variable value
        else:
            result += char                                     # Assign variable value
    return result                                              # Return result

def caesar_decrypt(cipher, shift=3):                           # Function definition
    return caesar_encrypt(cipher, -shift)                      # Return result

message = "CyberSecurity"                                      # Assign variable value
cipher = caesar_encrypt(message, 4)                            # Assign variable value
decrypted = caesar_decrypt(cipher, 4)                          # Assign variable value
print(f"Original:  {message}")                                 # Display output result
print(f"Encrypted: {cipher}")                                  # Display output result
print(f"Decrypted: {decrypted}")                               # Display output result
