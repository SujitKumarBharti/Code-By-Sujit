#include <stdio.h>

int is_prime(int number) {
    if (number < 2) {                                                    // Evaluate comparison condition
        return 0;                                                        // Exit program successfully
    }
    for (int divisor = 2; divisor * divisor <= number; divisor++) {      // Loop through elements
        if (number % divisor == 0) {                                     // Check if value equals zero
            return 0;                                                    // Exit program successfully
        }
    }
    return 1;                                                            // Exit with error status code
}

int main(void) {
    int number;                                                          // Declare variable

    printf("Enter an integer: ");                                        // Prompt user to enter an integer
    if (scanf("%d", &number) != 1) {                                     // Validate the input
        return 1;                                                        // Exit with error status code
    }

    printf("%d is %sprime.\n", number, is_prime(number) ? "" : "not ");  // Display , number, is_prime(number) ?
    printf("Prime numbers below 100:");                                  // Display prime numbers below 100
    for (int value = 2; value < 100; value++) {                          // Loop through elements
        if (is_prime(value)) {                                           // Check condition
            printf(" %d", value);                                        // Display output result
        }
    }
    printf("\n");                                                        // Display output result
    return 0;                                                            // Exit program successfully
}
