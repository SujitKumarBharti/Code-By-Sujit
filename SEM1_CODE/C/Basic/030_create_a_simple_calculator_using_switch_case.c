#include <stdio.h>

int main(void) {
    char op;                                                                      // Declare variables for calculation
    double a, b;                                                                  // Declare variables for calculation
    printf("Enter operator (+, -, *, /): ");                                      // Prompt user for input
    if (scanf(" %c", &op) == 1) {                                                 // Read input from user
        printf("Enter two numbers: ");                                            // Prompt user for input
        if (scanf("%lf %lf", &a, &b) == 2) {                                      // Read input from user
            switch (op) {
                case '+': printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b); break;  // Display create a simple calculator using... result
                case '-': printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b); break;  // Display create a simple calculator using... result
                case '*': printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b); break;  // Display create a simple calculator using... result
                case '/':
                    if (b != 0) printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);   // Display create a simple calculator using... result
                    else printf("Error: Division by zero!\n");                    // Display error message for invalid input
                    break;
                default: printf("Error: Invalid operator!\n"); break;             // Display error message for invalid input
            }
        }
    }
    return 0;                                                                     // Exit program successfully
}
