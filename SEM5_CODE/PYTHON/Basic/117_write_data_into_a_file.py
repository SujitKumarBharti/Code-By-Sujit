filename = "py_output.txt"                         # Perform calculation
with open(filename, "w", encoding="utf-8") as f:   # Perform calculation
    f.write("Hello from Python File Handling!\n")
    f.write("Working with files in Python is clean and idiomatic.\n")

print(f"Data successfully written to {filename}")  # Display write data into a file result
