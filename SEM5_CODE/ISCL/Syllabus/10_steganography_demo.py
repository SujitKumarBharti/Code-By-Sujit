def hide_message_in_binary(cover_text, secret_msg):                                            # Function definition
    binary_secret = ''.join(format(ord(c), '08b') for c in secret_msg)                         # Assign variable value
    stego_text = cover_text                                                                    # Assign variable value
    print(f"Hiding {len(secret_msg)} characters ({len(binary_secret)} bits) inside payload.")  # Display output result
    return binary_secret                                                                       # Return result

def extract_message_from_binary(binary_secret):                                                # Function definition
    chars = [chr(int(binary_secret[i:i+8], 2)) for i in range(0, len(binary_secret), 8)]       # Assign variable value
    return "".join(chars)                                                                      # Return result

cover = "Welcome to Jharkhand Raksha Shakti University"                                        # Assign variable value
secret = "SECURE"                                                                              # Assign variable value
hidden_bits = hide_message_in_binary(cover, secret)                                            # Assign variable value
recovered = extract_message_from_binary(hidden_bits)                                           # Assign variable value
print("Recovered steganographic secret:", recovered)                                           # Display output result
