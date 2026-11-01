#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int n;                                                  // Declare variables for calculation
    bool isPrime = true;                                    // Initialize variable
    printf("Enter an integer: ");                           // Prompt user for input
    if (scanf("%d", &n) == 1) {                             // Read input from user
        if (n <= 1) isPrime = false;                        // Check condition
        else {
            for (int i = 2; i * i <= n; i++) {              // Iterate through loop
                if (n % i == 0) {                           // Check condition
                    isPrime = false;                        // Perform calculation
                    break;
                }
            }
        }
        if (isPrime) printf("%d is a Prime number.\n", n);  // Display check whether a number is prime result
        else printf("%d is NOT a Prime number.\n", n);      // Display check whether a number is prime result
    }
    return 0;                                               // Exit program successfully
}
