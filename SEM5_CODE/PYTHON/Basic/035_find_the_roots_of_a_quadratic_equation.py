import math

try:
    a = float(input("Enter coefficient a: "))                                                                   # Prompt user for input
    b = float(input("Enter coefficient b: "))                                                                   # Prompt user for input
    c = float(input("Enter coefficient c: "))                                                                   # Prompt user for input

    if a == 0:                                                                                                  # Check condition
        print("Not a quadratic equation (a cannot be 0).")                                                      # Display find the roots of a quadratic eq... result
    else:
        disc = b * b - 4 * a * c                                                                                # Perform calculation
        if disc > 0:                                                                                            # Check condition
            r1 = (-b + math.sqrt(disc)) / (2 * a)                                                               # Perform calculation
            r2 = (-b - math.sqrt(disc)) / (2 * a)                                                               # Perform calculation
            print(f"Real and distinct roots: {r1:.2f} and {r2:.2f}")                                            # Display find the roots of a quadratic eq... result
        elif disc == 0:                                                                                         # Check condition
            r = -b / (2 * a)                                                                                    # Perform calculation
            print(f"Real and equal root: {r:.2f}")                                                              # Display find the roots of a quadratic eq... result
        else:
            real_part = -b / (2 * a)                                                                            # Perform calculation
            imag_part = math.sqrt(-disc) / (2 * a)                                                              # Perform calculation
            print(f"Complex roots: {real_part:.2f} + {imag_part:.2f}i and {real_part:.2f} - {imag_part:.2f}i")  # Display find the roots of a quadratic eq... result
except ValueError:                                                                                              # Handle invalid input error
    print("Invalid input.")                                                                                     # Display error message for invalid input
