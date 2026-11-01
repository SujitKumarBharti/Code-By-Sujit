#include <stdio.h>

int main(void) {
    long long n, temp, rev = 0;                     // Initialize variable
    printf("Enter an integer: ");                   // Prompt user for input
    if (scanf("%lld", &n) == 1) {                   // Read input from user
        temp = n;                                   // Perform calculation
        while (temp != 0) {                         // Iterate through loop
            rev = rev * 10 + (temp % 10);           // Perform calculation
            temp /= 10;                             // Perform calculation
        }
        printf("Reverse of %lld: %lld\n", n, rev);  // Display reverse a number result
    }
    return 0;                                       // Exit program successfully
}
