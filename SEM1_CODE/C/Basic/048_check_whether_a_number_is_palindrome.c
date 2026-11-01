#include <stdio.h>

int main(void) {
    long long n, temp, rev = 0;                               // Initialize variable
    printf("Enter an integer: ");                             // Prompt user for input
    if (scanf("%lld", &n) == 1) {                             // Read input from user
        temp = n;                                             // Perform calculation
        while (temp > 0) {                                    // Iterate through loop
            rev = rev * 10 + (temp % 10);                     // Perform calculation
            temp /= 10;                                       // Perform calculation
        }
        if (n >= 0 && rev == n)                               // Check condition
            printf("%lld is a Palindrome number.\n", n);      // Display check whether a number is palind... result
        else
            printf("%lld is NOT a Palindrome number.\n", n);  // Display check whether a number is palind... result
    }
    return 0;                                                 // Exit program successfully
}
