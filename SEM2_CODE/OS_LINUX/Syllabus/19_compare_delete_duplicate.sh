#!/bin/bash
f1="file1.txt"                               # Set variable value
f2="file2.txt"                               # Set variable value
echo "test content" > "$f1"                  # Print output message
echo "test content" > "$f2"                  # Print output message
if cmp -s "$f1" "$f2"; then                  # Check condition
    echo "Files are identical."              # Print output message
    rm -f "$f2"
    echo "Duplicate file $f2 deleted."       # Print output message
else
    echo "Files are different."              # Print output message
fi
rm -f "$f1"
