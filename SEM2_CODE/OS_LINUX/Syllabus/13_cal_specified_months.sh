#!/bin/bash
year=${1:-$(date +%Y)}                                      # Set variable value
month=${2:-$(date +%m)}                                     # Set variable value
echo "Displaying calendar for month $month of year $year:"  # Print output message
cal "$month" "$year"
