#include <stdio.h>

int main(void) {
    int number;                                            // Declare variable

    printf("Enter a positive integer: ");                  // Prompt user to enter a positive integer
    if (scanf("%d", &number) != 1 || number < 1) {         // Require a positive value
        printf("Enter a positive integer.\n");             // Prompt user to enter a positive integer.\n
        return 1;                                          // Exit with error status code
    }

    printf("Factors of %d:", number);                      // Display factors of
    for (int divisor = 1; divisor <= number; divisor++) {  // Loop through elements
        if (number % divisor == 0) {                       // Check if value equals zero
            printf(" %d", divisor);                        // Display output result
        }
    }
    printf("\n");                                          // Display output result
    return 0;                                              // Exit program successfully
}
