#include <stdio.h>
#include <stdlib.h>

int gcd(int first, int second) {
    if (second == 0) return first;                       // Check if value equals zero
    return gcd(second, first % second);                  // Return computed result
}

int main(void) {
    int first;                                           // Declare variable
    int second;                                          // Declare variable

    printf("Enter two integers: ");                      // Prompt user to enter two integers
    if (scanf("%d %d", &first, &second) != 2) return 1;  // Read user input values
    first = abs(first);                                  // Calculate and assign value
    second = abs(second);                                // Calculate and assign value
    printf("GCD: %d\n", gcd(first, second));             // Display gcd
    return 0;                                            // Exit program successfully
}
