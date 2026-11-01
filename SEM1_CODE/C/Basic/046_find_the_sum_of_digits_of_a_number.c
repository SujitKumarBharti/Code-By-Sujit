#include <stdio.h>

int main(void) {
    long long n, temp;                                  // Declare variables for calculation
    int sum = 0;                                        // Initialize variable
    printf("Enter an integer: ");                       // Prompt user for input
    if (scanf("%lld", &n) == 1) {                       // Read input from user
        temp = (n < 0) ? -n : n;                        // Perform calculation
        while (temp > 0) {                              // Iterate through loop
            sum += (temp % 10);                         // Perform calculation
            temp /= 10;                                 // Perform calculation
        }
        printf("Sum of digits of %lld: %d\n", n, sum);  // Display find the sum of digits of a number result
    }
    return 0;                                           // Exit program successfully
}
