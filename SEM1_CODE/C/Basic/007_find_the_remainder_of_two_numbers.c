#include <stdio.h>

int main(void) {
    int a, b;                                      // Declare variables for calculation
    printf("Enter two integers: ");                // Prompt user for input
    if (scanf("%d %d", &a, &b) == 2) {             // Read input from user
        if (b != 0) {                              // Check condition
            printf("Remainder: %d\n", a % b);      // Display find the remainder of two numbers result
        } else {
            printf("Error: Division by zero.\n");  // Display error message for invalid input
        }
    }
    return 0;                                      // Exit program successfully
}
