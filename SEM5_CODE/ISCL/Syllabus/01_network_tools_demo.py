import shutil
import subprocess

tools = ["ping", "traceroute", "arp", "netstat", "whois", "ip"]                  # Assign variable value
print("Auditing availability of network reconnaissance tools:")                  # Display output result
for tool in tools:                                                               # Iterate through loop
    path = shutil.which(tool)                                                    # Assign variable value
    status = "Available (" + path + ")" if path else "Not installed (Optional)"  # Assign variable value
    print(f"Tool {tool:12}: {status}")                                           # Display output result

print("Network diagnostic demonstration complete.")                              # Display output result
