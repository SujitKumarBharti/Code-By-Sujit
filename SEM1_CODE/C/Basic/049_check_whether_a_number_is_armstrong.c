#include <stdio.h>
#include <math.h>

int main(void) {
    int n, temp, rem, digits = 0;                           // Initialize variable
    double sum = 0.0;                                       // Initialize variable
    printf("Enter an integer: ");                           // Prompt user for input
    if (scanf("%d", &n) == 1 && n >= 0) {                   // Read input from user
        temp = n;                                           // Perform calculation
        while (temp != 0) {                                 // Iterate through loop
            digits++;
            temp /= 10;                                     // Perform calculation
        }
        temp = n;                                           // Perform calculation
        while (temp != 0) {                                 // Iterate through loop
            rem = temp % 10;                                // Perform calculation
            sum += pow(rem, digits);                        // Perform calculation
            temp /= 10;                                     // Perform calculation
        }
        if ((int)round(sum) == n)                           // Check condition
            printf("%d is an Armstrong number.\n", n);      // Display check whether a number is Armstrong result
        else
            printf("%d is NOT an Armstrong number.\n", n);  // Display check whether a number is Armstrong result
    }
    return 0;                                               // Exit program successfully
}
