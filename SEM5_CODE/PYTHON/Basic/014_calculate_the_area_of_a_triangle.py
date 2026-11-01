try:
    base = float(input("Enter base: "))                    # Prompt user for input
    height = float(input("Enter height: "))                # Prompt user for input
    print(f"Area of Triangle: {0.5 * base * height:.2f}")  # Display calculate the area of a triangle result
except ValueError:                                         # Handle invalid input error
    print("Invalid input.")                                # Display error message for invalid input
