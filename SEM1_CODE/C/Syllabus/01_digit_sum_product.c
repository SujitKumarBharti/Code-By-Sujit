#include <stdio.h>

int main(void) {
    int number;                                          // Declare variable
    int digit_sum = 0;                                   // Initialize variable
    long long digit_product = 1;                         // Initialize variable

    printf("Enter an integer: ");                        // Prompt user to enter an integer
    if (scanf("%d", &number) != 1) {                     // Validate the input
        return 1;                                        // Exit with error status code
    }

    long long remaining = number;                        // Initialize variable
    if (remaining < 0) {                                 // Ignore the sign when processing digits
        remaining = -remaining;                          // Calculate and assign value
    }
    if (remaining == 0) {                                // Zero has one digit with value zero
        digit_product = 0;                               // Calculate and assign value
    }

    while (remaining > 0) {                              // Iterate while condition holds
        int digit = (int)(remaining % 10);               // Initialize variable
        digit_sum += digit;                              // Accumulate updated value
        digit_product *= digit;                          // Accumulate updated value
        remaining /= 10;                                 // Accumulate updated value
    }

    printf("Sum of digits: %d\n", digit_sum);            // Display sum of digits
    printf("Product of digits: %lld\n", digit_product);  // Display product of digits
    return 0;                                            // Exit program successfully
}
