#include <stdio.h>

int main(void) {
    double base, result = 1.0;                              // Initialize variable
    int exp;                                                // Declare variables for calculation
    printf("Enter base and integer exponent: ");            // Prompt user for input
    if (scanf("%lf %d", &base, &exp) == 2) {                // Read input from user
        int e = (exp < 0) ? -exp : exp;                     // Initialize variable
        for (int i = 0; i < e; i++) {                       // Iterate through loop
            result *= base;                                 // Perform calculation
        }
        if (exp < 0) result = 1.0 / result;                 // Check condition
        printf("%.2lf ^ %d = %.4lf\n", base, exp, result);  // Display calculate power without using pow() result
    }
    return 0;                                               // Exit program successfully
}
