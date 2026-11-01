#include <stdio.h>

long long absolute_value(long long number) {
    return number < 0 ? -number : number;                           // Return computed result
}

long long gcd_recursive(long long first, long long second) {
    if (second == 0) return first;                                  // Check if value equals zero
    return gcd_recursive(second, first % second);                   // Return computed result
}

long long gcd_iterative(long long first, long long second) {
    while (second != 0) {                                           // Iterate while condition holds
        long long remainder = first % second;                       // Initialize variable
        first = second;                                             // Calculate and assign value
        second = remainder;                                         // Calculate and assign value
    }
    return first;                                                   // Return computed result first
}

int main(void) {
    long long first;                                                // Declare variable
    long long second;                                               // Declare variable

    printf("Enter two integers: ");                                 // Prompt user to enter two integers
    if (scanf("%lld %lld", &first, &second) != 2) return 1;         // Read user input values
    first = absolute_value(first);                                  // Calculate and assign value
    second = absolute_value(second);                                // Calculate and assign value
    printf("Recursive GCD: %lld\n", gcd_recursive(first, second));  // Display recursive gcd
    printf("Iterative GCD: %lld\n", gcd_iterative(first, second));  // Display iterative gcd
    return 0;                                                       // Exit program successfully
}
