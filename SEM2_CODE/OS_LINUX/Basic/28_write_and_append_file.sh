#!/bin/bash


temp_output="output_sample.txt"

echo "First line: Created at $(date)" > "$temp_output"  # Overwrite or create new file
echo "Second line: Operating System Lab." >> "$temp_output"
echo "Third line: Appended content successfully." >> "$temp_output"

echo "Contents of $temp_output:"
cat "$temp_output"

rm -f "$temp_output"                                    # Cleanup
