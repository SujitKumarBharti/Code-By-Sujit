#include <stdio.h>

#define PI 3.141592653589793

void calculate_circle(double radius, double *area, double *circumference) {
    *area = PI * radius * radius;                                      // Calculate and assign value
    *circumference = 2.0 * PI * radius;                                // Calculate and assign value
}

int main(void) {
    double radius;                                                     // Declare variable
    double area;                                                       // Declare variable
    double circumference;                                              // Declare variable

    printf("Enter radius: ");                                          // Prompt user to enter radius
    if (scanf("%lf", &radius) != 1 || radius < 0.0) return 1;          // Read user input values
    calculate_circle(radius, &area, &circumference);
    printf("Area: %.2f\nCircumference: %.2f\n", area, circumference);  // Display area
    return 0;                                                          // Exit program successfully
}
