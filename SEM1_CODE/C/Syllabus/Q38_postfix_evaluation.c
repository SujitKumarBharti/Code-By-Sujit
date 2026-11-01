#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define EXPRESSION_SIZE 500
#define STACK_SIZE 250

int main(void) {
    char expression[EXPRESSION_SIZE];                                          // Declare variable
    double values[STACK_SIZE];                                                 // Declare variable
    int top = -1;                                                              // Initialize variable

    printf("Enter a space-separated postfix expression: ");                    // Prompt user to enter a space-separated postfix expression
    if (fgets(expression, sizeof(expression), stdin) == NULL) return 1;        // Check pointer validity
    char *token = strtok(expression, " \t\r\n");                               // Initialize variable
    while (token != NULL) {                                                    // Iterate while condition holds
        char *end = NULL;                                                      // Initialize variable
        double number = strtod(token, &end);                                   // Initialize variable
        if (end != token && *end == '\0') {                                    // Check condition
            if (top == STACK_SIZE - 1) return 1;                               // Check condition
            values[++top] = number;                                            // Calculate and assign value
        } else if (strlen(token) == 1 && strchr("+-*/^", token[0]) != NULL) {  // Check pointer validity
            if (top < 1) {                                                     // Evaluate comparison condition
                printf("Invalid postfix expression.\n");                       // Display error message
                return 1;                                                      // Exit with error status code
            }
            double right = values[top--];                                      // Initialize variable
            double left = values[top--];                                       // Initialize variable
            switch (token[0]) {
                case '+': values[++top] = left + right; break;                 // Calculate and assign value
                case '-': values[++top] = left - right; break;                 // Calculate and assign value
                case '*': values[++top] = left * right; break;                 // Calculate and assign value
                case '/':
                    if (right == 0.0) {                                        // Check if value equals zero
                        printf("Division by zero.\n");                         // Display division by zero.\n
                        return 1;                                              // Exit with error status code
                    }
                    values[++top] = left / right;                              // Calculate and assign value
                    break;                                                     // Exit loop or switch block
                case '^': values[++top] = pow(left, right); break;             // Calculate and assign value
            }
        } else {
            printf("Invalid token: %s\n", token);                              // Display error message
            return 1;                                                          // Exit with error status code
        }
        token = strtok(NULL, " \t\r\n");                                       // Calculate and assign value
    }
    if (top != 0) {                                                            // Check condition
        printf("Invalid postfix expression.\n");                               // Display error message
        return 1;                                                              // Exit with error status code
    }
    printf("Result: %.6g\n", values[top]);                                     // Display result
    return 0;                                                                  // Exit program successfully
}
