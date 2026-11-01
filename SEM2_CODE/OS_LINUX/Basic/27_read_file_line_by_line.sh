#!/bin/bash


sample_file="/etc/shells"

if [ ! -f "$sample_file" ]; then
    echo "File $sample_file not found."
    exit 1
fi

echo "Reading valid login shells from $sample_file:"
line_num=1
while IFS= read -r line || [ -n "$line" ]; do
    if [[ "$line" =~ ^#.* ]] || [ -z "$line" ]; then  # Skip empty lines or comment lines
        continue
    fi
    echo "  Shell $line_num: $line"
    (( line_num++ ))
done < "$sample_file"
