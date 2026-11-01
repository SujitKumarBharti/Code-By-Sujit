#!/bin/bash


sample_text="Operating Systems and Linux.\nMastering shell scripting.\nThird line of the file."

lines=$(echo -e "$sample_text" | wc -l)
words=$(echo -e "$sample_text" | wc -w)
chars=$(echo -e "$sample_text" | wc -m)

echo "Sample Text Analyzed:"
echo "Lines     : $lines"
echo "Words     : $words"
echo "Characters: $chars"
