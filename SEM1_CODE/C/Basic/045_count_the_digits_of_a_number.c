#include <stdio.h>

int main(void) {
    long long n, temp;                                   // Declare variables for calculation
    int count = 0;                                       // Initialize variable
    printf("Enter an integer: ");                        // Prompt user for input
    if (scanf("%lld", &n) == 1) {                        // Read input from user
        temp = n;                                        // Perform calculation
        if (temp == 0) count = 1;                        // Check condition
        else {
            if (temp < 0) temp = -temp;                  // Check condition
            while (temp > 0) {                           // Iterate through loop
                count++;
                temp /= 10;                              // Perform calculation
            }
        }
        printf("Total digits in %lld: %d\n", n, count);  // Display count the digits of a number result
    }
    return 0;                                            // Exit program successfully
}
