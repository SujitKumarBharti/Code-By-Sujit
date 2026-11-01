try:
    marks = float(input("Enter marks out of 100: "))  # Prompt user for input
    if 90 <= marks <= 100:                            # Check condition
        print("Grade: A+")                            # Display calculate student grades based o... result
    elif marks >= 80:                                 # Check condition
        print("Grade: A")                             # Display calculate student grades based o... result
    elif marks >= 70:                                 # Check condition
        print("Grade: B")                             # Display calculate student grades based o... result
    elif marks >= 60:                                 # Check condition
        print("Grade: C")                             # Display calculate student grades based o... result
    elif marks >= 50:                                 # Check condition
        print("Grade: D")                             # Display calculate student grades based o... result
    elif marks >= 0:                                  # Check condition
        print("Grade: F (Fail)")                      # Display calculate student grades based o... result
    else:
        print("Invalid marks entered.")               # Display error message for invalid input
except ValueError:                                    # Handle invalid input error
    print("Invalid input.")                           # Display error message for invalid input
