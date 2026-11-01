#include <stdio.h>

int main(void) {
    int a, b, sum;                           // Declare variables for calculation
    printf("Enter two numbers: ");           // Prompt user for input
    if (scanf("%d %d", &a, &b) == 2) {       // Read input from user
        sum = a + b;                         // Perform calculation
        printf("Sum: %d\n", sum);            // Display add two numbers result
    }
    return 0;                                // Exit program successfully
}
