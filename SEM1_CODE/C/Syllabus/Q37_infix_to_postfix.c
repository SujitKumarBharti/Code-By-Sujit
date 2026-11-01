#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define EXPRESSION_SIZE 200

static int precedence(char operation) {
    if (operation == '^') return 3;                                     // Check condition
    if (operation == '*' || operation == '/') return 2;                 // Check condition
    if (operation == '+' || operation == '-') return 1;                 // Check condition
    return 0;                                                           // Exit program successfully
}

int main(void) {
    char infix[EXPRESSION_SIZE];                                        // Declare variable
    char operators[EXPRESSION_SIZE];                                    // Declare variable
    char postfix[EXPRESSION_SIZE * 2];                                  // Declare variable
    int top = -1;                                                       // Initialize variable
    size_t output = 0;                                                  // Calculate and assign value

    printf("Enter an infix expression (single-character operands): ");  // Prompt user to enter an infix expression (single-character operands)
    if (fgets(infix, sizeof(infix), stdin) == NULL) return 1;           // Check pointer validity
    infix[strcspn(infix, "\n")] = '\0';                                 // Calculate and assign value
    for (size_t index = 0; infix[index] != '\0'; index++) {             // Loop through elements
        char token = infix[index];                                      // Initialize variable
        if (isspace((unsigned char)token)) continue;                    // Check condition
        if (isalnum((unsigned char)token)) {                            // Check condition
            postfix[output++] = token;                                  // Calculate and assign value
        } else if (token == '(') {                                      // Check condition
            operators[++top] = token;                                   // Calculate and assign value
        } else if (token == ')') {                                      // Check condition
            while (top >= 0 && operators[top] != '(')                   // Iterate while condition holds
                postfix[output++] = operators[top--];                   // Calculate and assign value
            if (top < 0) {                                              // Check for negative value
                printf("Mismatched parentheses.\n");                    // Display mismatched parentheses.\n
                return 1;                                               // Exit with error status code
            }
            top--;                                                      // Decrement counter
        } else if (precedence(token) > 0) {                             // Evaluate comparison condition
            while (top >= 0 && operators[top] != '(' &&                 // Iterate while condition holds
                   (precedence(operators[top]) > precedence(token) ||
                    (precedence(operators[top]) == precedence(token) && token != '^')))
                postfix[output++] = operators[top--];                   // Calculate and assign value
            operators[++top] = token;                                   // Calculate and assign value
        } else {
            printf("Unsupported character: %c\n", token);               // Display unsupported character
            return 1;                                                   // Exit with error status code
        }
    }
    while (top >= 0) {                                                  // Iterate while condition holds
        if (operators[top] == '(') {                                    // Check condition
            printf("Mismatched parentheses.\n");                        // Display mismatched parentheses.\n
            return 1;                                                   // Exit with error status code
        }
        postfix[output++] = operators[top--];                           // Calculate and assign value
    }
    postfix[output] = '\0';                                             // Calculate and assign value
    printf("Postfix: %s\n", postfix);                                   // Display postfix
    return 0;                                                           // Exit program successfully
}
