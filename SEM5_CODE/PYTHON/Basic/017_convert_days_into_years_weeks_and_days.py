try:
    total_days = int(input("Enter total days: "))                                 # Prompt user for input
    years = total_days // 365                                                     # Perform calculation
    weeks = (total_days % 365) // 7                                               # Perform calculation
    days = (total_days % 365) % 7                                                 # Perform calculation
    print(f"{total_days} days = {years} years, {weeks} weeks, and {days} days.")  # Display convert days into years, weeks, ... result
except ValueError:                                                                # Handle invalid input error
    print("Invalid integer input.")                                               # Display error message for invalid input
