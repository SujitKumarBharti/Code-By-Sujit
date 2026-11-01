#!/bin/bash
echo "Executing automation batch script..."            # Print output message
mkdir -p demo_folder
echo "Hello from batch script" > demo_folder/demo.txt  # Print output message
cat demo_folder/demo.txt
rm -rf demo_folder
echo "Batch execution complete."                       # Print output message
