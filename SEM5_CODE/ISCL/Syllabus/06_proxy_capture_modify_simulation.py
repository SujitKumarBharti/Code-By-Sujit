def simulate_burp_proxy(request_headers, payload):                                               # Function definition
    print("Intercepting HTTP request before sending...")                                         # Display output result
    modified_headers = dict(request_headers)                                                     # Assign variable value
    modified_headers["X-Security-Scan"] = "BurpProxyIntercepted"                                 # Assign variable value
    tampered_payload = payload.replace("role=user", "role=admin")                                # Assign variable value
    return modified_headers, tampered_payload                                                    # Return result

original_headers = {"Host": "example.com", "Content-Type": "application/x-www-form-urlencoded"}  # Assign variable value
original_body = "username=sujit&role=user"                                                       # Assign variable value

new_headers, new_body = simulate_burp_proxy(original_headers, original_body)                     # Assign variable value
print("Modified Headers:", new_headers)                                                          # Display output result
print("Modified Payload (Privilege Escalation test):", new_body)                                 # Display output result
