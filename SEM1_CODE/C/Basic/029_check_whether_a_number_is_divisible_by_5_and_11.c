#include <stdio.h>

int main(void) {
    int n;                                                         // Declare variables for calculation
    printf("Enter an integer: ");                                  // Prompt user for input
    if (scanf("%d", &n) == 1) {                                    // Read input from user
        if (n % 5 == 0 && n % 11 == 0)                             // Check condition
            printf("%d is divisible by both 5 and 11.\n", n);      // Display check whether a number is divisi... result
        else
            printf("%d is NOT divisible by both 5 and 11.\n", n);  // Display check whether a number is divisi... result
    }
    return 0;                                                      // Exit program successfully
}
