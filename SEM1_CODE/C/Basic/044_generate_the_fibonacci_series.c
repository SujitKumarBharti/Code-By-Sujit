#include <stdio.h>

int main(void) {
    int n;                                   // Declare variables for calculation
    printf("Enter number of terms: ");       // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0) {     // Read input from user
        long long t1 = 0, t2 = 1, nextTerm;  // Initialize variable
        printf("Fibonacci Series: ");        // Display generate the Fibonacci series result
        for (int i = 1; i <= n; i++) {       // Iterate through loop
            printf("%lld ", t1);             // Display generate the Fibonacci series result
            nextTerm = t1 + t2;              // Perform calculation
            t1 = t2;                         // Perform calculation
            t2 = nextTerm;                   // Perform calculation
        }
        printf("\n");                        // Display generate the Fibonacci series result
    }
    return 0;                                // Exit program successfully
}
