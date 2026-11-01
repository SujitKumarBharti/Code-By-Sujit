#include <stdio.h>

int main(void) {
    float a, b;                                                 // Declare variables for calculation
    printf("Enter dividend and divisor: ");                     // Prompt user for input
    if (scanf("%f %f", &a, &b) == 2) {                          // Read input from user
        if (b != 0) {                                           // Check condition
            printf("Quotient: %.2f\n", a / b);                  // Display divide two numbers result
        } else {
            printf("Error: Division by zero is undefined.\n");  // Display error message for invalid input
        }
    }
    return 0;                                                   // Exit program successfully
}
