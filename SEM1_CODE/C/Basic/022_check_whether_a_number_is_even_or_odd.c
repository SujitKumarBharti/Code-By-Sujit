#include <stdio.h>

int main(void) {
    int n;                                   // Declare variables for calculation
    printf("Enter an integer: ");            // Prompt user for input
    if (scanf("%d", &n) == 1) {              // Read input from user
        if (n % 2 == 0)                      // Check condition
            printf("%d is Even.\n", n);      // Display check whether a number is even o... result
        else
            printf("%d is Odd.\n", n);       // Display check whether a number is even o... result
    }
    return 0;                                // Exit program successfully
}
