#include <stdio.h>

int main(void) {
    int number;                                     // Declare variable
    long long remaining;                            // Declare variable
    long long reversed = 0;                         // Initialize variable

    printf("Enter an integer: ");                   // Prompt user to enter an integer
    if (scanf("%d", &number) != 1) {                // Validate the input
        return 1;                                   // Exit with error status code
    }

    remaining = number;                             // Calculate and assign value
    while (remaining != 0) {                        // Iterate while condition holds
        reversed = reversed * 10 + remaining % 10;  // Calculate and assign value
        remaining /= 10;                            // Accumulate updated value
    }

    printf("Reversed number: %lld\n", reversed);    // Display reversed number
    return 0;                                       // Exit program successfully
}
