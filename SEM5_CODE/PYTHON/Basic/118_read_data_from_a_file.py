filename = "py_output.txt"                        # Set target file name
with open(filename, "a", encoding="utf-8") as f:  # Ensure file exists
    pass

print(f"Contents of {filename}:")                 # Display file contents header
with open(filename, "r", encoding="utf-8") as f:  # Open file for reading
    for line in f:                                # Iterate through file lines
        print(line, end="")                       # Display file line content
