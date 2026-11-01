#include <stdio.h>

int main(void) {
    int n;                                                            // Declare variables for calculation
    unsigned long long fact = 1;                                      // Perform calculation
    printf("Enter a non-negative integer: ");                         // Prompt user for input
    if (scanf("%d", &n) == 1) {                                       // Read input from user
        if (n < 0) {                                                  // Check condition
            printf("Factorial of negative number doesn't exist.\n");  // Display find the factorial of a number result
        } else {
            for (int i = 1; i <= n; i++) fact *= i;                   // Iterate through loop
            printf("Factorial of %d = %llu\n", n, fact);              // Display find the factorial of a number result
        }
    }
    return 0;                                                         // Exit program successfully
}
