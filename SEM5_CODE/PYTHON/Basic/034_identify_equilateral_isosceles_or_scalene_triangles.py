try:
    s1 = float(input("Enter side 1: "))                       # Prompt user for input
    s2 = float(input("Enter side 2: "))                       # Prompt user for input
    s3 = float(input("Enter side 3: "))                       # Prompt user for input

    if (s1 + s2 > s3) and (s1 + s3 > s2) and (s2 + s3 > s1):  # Check condition
        if s1 == s2 == s3:                                    # Check condition
            print("Equilateral Triangle")                     # Display identify equilateral, isosceles,... result
        elif s1 == s2 or s2 == s3 or s1 == s3:                # Check condition
            print("Isosceles Triangle")                       # Display identify equilateral, isosceles,... result
        else:
            print("Scalene Triangle")                         # Display identify equilateral, isosceles,... result
    else:
        print("Given sides do not form a valid triangle.")    # Display identify equilateral, isosceles,... result
except ValueError:                                            # Handle invalid input error
    print("Invalid input.")                                   # Display error message for invalid input
