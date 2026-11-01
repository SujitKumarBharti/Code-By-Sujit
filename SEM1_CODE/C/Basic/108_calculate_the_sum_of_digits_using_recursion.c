#include <stdio.h>

int sumOfDigits(int n) {                                                     // Declare variables for calculation
    if (n == 0) return 0;                                                    // Check condition
    return (n % 10) + sumOfDigits(n / 10);
}

int main(void) {
    int n = 12345;                                                           // Initialize variable
    printf("Sum of digits of %d using recursion: %d\n", n, sumOfDigits(n));  // Display calculate the sum of digits usin... result
    return 0;                                                                // Exit program successfully
}
