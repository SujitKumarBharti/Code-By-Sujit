import socket

def scan_port(host, port):                                 # Function definition
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # Assign variable value
    s.settimeout(0.5)
    result = s.connect_ex((host, port))                    # Assign variable value
    s.close()
    return result == 0                                     # Return result

target_host = "127.0.0.1"                                  # Assign variable value
common_ports = [21, 22, 80, 443, 8080]                     # Assign variable value
print(f"Scanning target: {target_host}")                   # Display output result
for port in common_ports:                                  # Iterate through loop
    is_open = scan_port(target_host, port)                 # Assign variable value
    status = "OPEN" if is_open else "CLOSED/FILTERED"      # Assign variable value
    print(f"Port {port:5}: {status}")                      # Display output result
