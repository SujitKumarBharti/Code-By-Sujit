filename = "py_output.txt"                          # Perform calculation
with open(filename, "a", encoding="utf-8") as f:    # Perform calculation
    f.write("Appended line from Python file handling program.\n")

print(f"Data successfully appended to {filename}")  # Display append data to a file result
