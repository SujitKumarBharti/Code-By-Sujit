try:
    length = float(input("Enter length: "))            # Prompt user for input
    width = float(input("Enter width: "))              # Prompt user for input
    print(f"Area of Rectangle: {length * width:.2f}")  # Display calculate the area of a rectangle result
except ValueError:                                     # Handle invalid input error
    print("Invalid input.")                            # Display error message for invalid input
