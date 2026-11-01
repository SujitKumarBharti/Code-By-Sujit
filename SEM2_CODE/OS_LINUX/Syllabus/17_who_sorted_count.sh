#!/bin/bash
echo "Sorted list of logged-in users:"       # Print output message
who | sort
echo -n "Total number of users: "            # Print output message
who | wc -l
