import math

try:
    radius = float(input("Enter radius: "))  # Prompt user for input
    area = math.pi * radius * radius         # Perform calculation
    print(f"Area of Circle: {area:.2f}")     # Display calculate the area of a circle result
except ValueError:                           # Handle invalid input error
    print("Invalid input.")                  # Display error message for invalid input
