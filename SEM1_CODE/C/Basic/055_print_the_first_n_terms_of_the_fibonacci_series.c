#include <stdio.h>

int main(void) {
    int n;                                   // Declare variables for calculation
    printf("Enter N: ");                     // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0) {     // Read input from user
        long long a = 0, b = 1;              // Initialize variable
        printf("First %d terms: ", n);       // Display print the first N terms of the F... result
        for (int i = 1; i <= n; i++) {       // Iterate through loop
            printf("%lld ", a);              // Display print the first N terms of the F... result
            long long next = a + b;          // Initialize variable
            a = b;                           // Perform calculation
            b = next;                        // Perform calculation
        }
        printf("\n");                        // Display print the first N terms of the F... result
    }
    return 0;                                // Exit program successfully
}
