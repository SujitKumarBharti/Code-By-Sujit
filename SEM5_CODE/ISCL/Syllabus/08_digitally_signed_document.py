import hashlib
import hmac

class DigitalSignatureDemo:
    def __init__(self, secret_key):                                                     # Function definition
        self.secret_key = secret_key.encode()                                           # Assign variable value

    def sign_document(self, content):                                                   # Function definition
        return hmac.new(self.secret_key, content.encode(), hashlib.sha256).hexdigest()  # Return result

    def verify_document(self, content, signature):                                      # Function definition
        expected = self.sign_document(content)                                          # Assign variable value
        return hmac.compare_digest(expected, signature)                                 # Return result

signer = DigitalSignatureDemo("university-private-key")                                 # Assign variable value
doc_text = "Official Student Transcript - Verified"                                     # Assign variable value
sig = signer.sign_document(doc_text)                                                    # Assign variable value
print("Generated Digital Signature:", sig)                                              # Display output result
is_valid = signer.verify_document(doc_text, sig)                                        # Assign variable value
print("Signature verification status:", is_valid)                                       # Display output result
