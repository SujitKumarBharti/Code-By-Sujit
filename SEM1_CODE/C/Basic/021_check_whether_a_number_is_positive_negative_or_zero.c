#include <stdio.h>

int main(void) {
    double num;                                   // Declare variables for calculation
    printf("Enter a number: ");                   // Prompt user for input
    if (scanf("%lf", &num) == 1) {                // Read input from user
        if (num > 0)                              // Check condition
            printf("%.2lf is Positive.\n", num);  // Display check whether a number is positi... result
        else if (num < 0)
            printf("%.2lf is Negative.\n", num);  // Display check whether a number is positi... result
        else
            printf("The number is Zero.\n");      // Display check whether a number is positi... result
    }
    return 0;                                     // Exit program successfully
}
