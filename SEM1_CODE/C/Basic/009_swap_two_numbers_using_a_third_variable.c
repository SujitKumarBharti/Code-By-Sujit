#include <stdio.h>

int main(void) {
    int a, b, temp;                                         // Declare variables for calculation
    printf("Enter two numbers (a and b): ");                // Prompt user for input
    if (scanf("%d %d", &a, &b) == 2) {                      // Read input from user
        printf("Before swapping: a = %d, b = %d\n", a, b);  // Display swap two numbers using a third v... result
        temp = a;                                           // Perform calculation
        a = b;                                              // Perform calculation
        b = temp;                                           // Perform calculation
        printf("After swapping : a = %d, b = %d\n", a, b);  // Display swap two numbers using a third v... result
    }
    return 0;                                               // Exit program successfully
}
