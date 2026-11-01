#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, disc, root1, root2, realPart, imagPart;                        // Declare variables for calculation
    printf("Enter coefficients a, b, and c (ax^2 + bx + c = 0): ");                // Prompt user for input
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {                                   // Read input from user
        if (a == 0) {                                                              // Check condition
            printf("Not a quadratic equation (a cannot be 0).\n");                 // Display find the roots of a quadratic eq... result
            return 0;                                                              // Exit program successfully
        }
        disc = b * b - 4 * a * c;                                                  // Perform calculation
        if (disc > 0) {                                                            // Check condition
            root1 = (-b + sqrt(disc)) / (2 * a);                                   // Perform calculation
            root2 = (-b - sqrt(disc)) / (2 * a);                                   // Perform calculation
            printf("Roots are real and different: %.2lf, %.2lf\n", root1, root2);  // Display find the roots of a quadratic eq... result
        } else if (disc == 0) {                                                    // Check condition
            root1 = -b / (2 * a);                                                  // Perform calculation
            printf("Roots are real and equal: %.2lf\n", root1);                    // Display find the roots of a quadratic eq... result
        } else {
            realPart = -b / (2 * a);                                               // Perform calculation
            imagPart = sqrt(-disc) / (2 * a);                                      // Perform calculation
            printf("Roots are complex: %.2lf + %.2lfi and %.2lf - %.2lfi\n",       // Display find the roots of a quadratic eq... result
                   realPart, imagPart, realPart, imagPart);
        }
    }
    return 0;                                                                      // Exit program successfully
}
