#include <stdio.h>

int main(void) {
    float a, b, c;                                             // Declare variables for calculation
    printf("Enter three angles of the triangle: ");            // Prompt user for input
    if (scanf("%f %f %f", &a, &b, &c) == 3) {                  // Read input from user
        if (a > 0 && b > 0 && c > 0 && (a + b + c == 180.0f))  // Check condition
            printf("The triangle is VALID.\n");                // Display check whether a triangle is valid result
        else
            printf("The triangle is INVALID.\n");              // Display error message for invalid input
    }
    return 0;                                                  // Exit program successfully
}
