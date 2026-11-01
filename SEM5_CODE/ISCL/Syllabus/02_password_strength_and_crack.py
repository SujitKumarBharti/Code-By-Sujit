import hashlib
import re

def evaluate_password_strength(password):                                       # Function definition
    score = 0                                                                   # Assign variable value
    if len(password) >= 8: score += 1                                           # Check condition
    if re.search(r'[A-Z]', password): score += 1                                # Check condition
    if re.search(r'[a-z]', password): score += 1                                # Check condition
    if re.search(r'[0-9]', password): score += 1                                # Check condition
    if re.search(r'[@$!%*?&]', password): score += 1                            # Check condition
    return "Strong" if score >= 4 else "Moderate" if score >= 2 else "Weak"     # Return result

def simple_dictionary_attack(target_md5, wordlist):                             # Function definition
    for word in wordlist:                                                       # Iterate through loop
        hashed = hashlib.md5(word.encode()).hexdigest()                         # Assign variable value
        if hashed == target_md5:                                                # Check condition
            return word                                                         # Return result
    return None                                                                 # Return result

test_pw = "Admin@123"                                                           # Assign variable value
print(f"Password '{test_pw}' strength: {evaluate_password_strength(test_pw)}")  # Display output result

target_hash = hashlib.md5("secret".encode()).hexdigest()                        # Assign variable value
words = ["password", "123456", "admin", "secret", "welcome"]                    # Assign variable value
found = simple_dictionary_attack(target_hash, words)                            # Assign variable value
print(f"Cracked hash '{target_hash}': found plaintext '{found}'")               # Display output result
