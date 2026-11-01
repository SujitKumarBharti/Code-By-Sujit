#!/bin/bash


choice=2

case $choice in
    1)
        echo "Option 1: Display Date & Time"
        date
        ;;
    2)
        echo "Option 2: Display Current Working Directory"
        pwd
        ;;
    3)
        echo "Option 3: Display Logged in User"
        whoami
        ;;
    *)
        echo "Invalid choice selected"
        ;;
esac
