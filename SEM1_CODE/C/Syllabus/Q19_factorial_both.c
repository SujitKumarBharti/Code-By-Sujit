#include <stdio.h>

unsigned long long factorial_recursive(unsigned int number) {
    if (number < 2) return 1;                                                             // Evaluate comparison condition
    return number * factorial_recursive(number - 1);                                      // Return computed result
}

int main(void) {
    unsigned int number;                                                                  // Declare variable
    unsigned long long factorial_iterative = 1;                                           // Initialize variable

    printf("Enter a number (0-20): ");                                                    // Prompt user to enter a number (0-20)
    if (scanf("%u", &number) != 1 || number > 20) return 1;                               // Read user input values
    for (unsigned int value = 2; value <= number; value++) factorial_iterative *= value;  // Loop through elements
    printf("Recursive factorial: %llu\n", factorial_recursive(number));                   // Display recursive factorial
    printf("Iterative factorial: %llu\n", factorial_iterative);                           // Display iterative factorial
    return 0;                                                                             // Exit program successfully
}
