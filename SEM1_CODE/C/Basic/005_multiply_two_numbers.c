#include <stdio.h>

int main(void) {
    int a, b, prod;                          // Declare variables for calculation
    printf("Enter two numbers: ");           // Prompt user for input
    if (scanf("%d %d", &a, &b) == 2) {       // Read input from user
        prod = a * b;                        // Perform calculation
        printf("Product: %d\n", prod);       // Display multiply two numbers result
    }
    return 0;                                // Exit program successfully
}
