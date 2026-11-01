#include <stdio.h>

int main(void) {
    int a, b;                                               // Declare variables for calculation
    printf("Enter two numbers (a and b): ");                // Prompt user for input
    if (scanf("%d %d", &a, &b) == 2) {                      // Read input from user
        printf("Before swapping: a = %d, b = %d\n", a, b);  // Display swap two numbers without using a... result
        a = a + b;                                          // Perform calculation
        b = a - b;                                          // Perform calculation
        a = a - b;                                          // Perform calculation
        printf("After swapping : a = %d, b = %d\n", a, b);  // Display swap two numbers without using a... result
    }
    return 0;                                               // Exit program successfully
}
