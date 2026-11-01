#include <stdio.h>

int main(void) {
    int a, b, diff;                          // Declare variables for calculation
    printf("Enter two numbers: ");           // Prompt user for input
    if (scanf("%d %d", &a, &b) == 2) {       // Read input from user
        diff = a - b;                        // Perform calculation
        printf("Difference: %d\n", diff);    // Display subtract two numbers result
    }
    return 0;                                // Exit program successfully
}
