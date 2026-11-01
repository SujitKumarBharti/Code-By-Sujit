import hashlib

class ProtectedDocument:
    def __init__(self, filename, content, password):                                              # Function definition
        self.filename = filename                                                                  # Assign variable value
        self.password_hash = hashlib.sha256(password.encode()).hexdigest()                        # Assign variable value
        self.encrypted_content = [ord(c) ^ 0x5A for c in content]                                 # Assign variable value

    def read_document(self, password):                                                            # Function definition
        if hashlib.sha256(password.encode()).hexdigest() != self.password_hash:                   # Check condition
            raise PermissionError("Access Denied: Invalid Password!")
        return "".join(chr(b ^ 0x5A) for b in self.encrypted_content)                             # Return result

doc = ProtectedDocument("confidential.docx", "Sensitive Cyber Security Report", "securePass123")  # Assign variable value
print("Encrypted buffer storage:", doc.encrypted_content[:8])                                     # Display output result
print("Decrypted document content:", doc.read_document("securePass123"))                          # Display output result
