filename = "py_output.txt"                                                # Perform calculation

try:
    with open(filename, "r", encoding="utf-8") as f:                      # Perform calculation
        content = f.read()                                                # Perform calculation

    characters = len(content)                                             # Perform calculation
    words = len(content.split())                                          # Perform calculation
    lines = content.count("\n")                                           # Perform calculation

    print(f"File Statistics for {filename}:")                             # Display count characters, words, and lin... result
    print(f"Characters: {characters}")                                    # Display count characters, words, and lin... result
    print(f"Words     : {words}")                                         # Display count characters, words, and lin... result
    print(f"Lines     : {lines}")                                         # Display count characters, words, and lin... result
except FileNotFoundError:                                                 # Handle invalid input error
    print(f"File {filename} not found. Please run write program first.")  # Display count characters, words, and lin... result
