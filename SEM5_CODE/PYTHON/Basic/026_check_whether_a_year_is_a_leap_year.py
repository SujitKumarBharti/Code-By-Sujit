try:
    year = int(input("Enter a year: "))                           # Prompt user for input
    if (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0):  # Check condition
        print(f"{year} is a Leap Year.")                          # Display check whether a year is a leap year result
    else:
        print(f"{year} is NOT a Leap Year.")                      # Display check whether a year is a leap year result
except ValueError:                                                # Handle invalid input error
    print("Invalid year input.")                                  # Display error message for invalid input
