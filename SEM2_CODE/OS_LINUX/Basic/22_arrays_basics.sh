#!/bin/bash

languages=("C" "C++" "Java" "Python" "Bash")  # Demonstrates array creation, indexing, length, and iteration
echo "First element [0]  : ${languages[0]}"   # Declare indexed array
echo "Second element [1] : ${languages[1]}"
echo "All elements (@)   : ${languages[@]}"
echo "Array length (#)   : ${#languages[@]}"

languages+=("PHP")                            # Adding an element
echo "After adding PHP   : ${languages[@]}"

echo -e "\nIterating over array:"
for lang in "${languages[@]}"; do
    echo " - $lang"
done
