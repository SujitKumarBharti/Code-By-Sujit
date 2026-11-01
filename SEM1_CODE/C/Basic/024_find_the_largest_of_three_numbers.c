#include <stdio.h>

int main(void) {
    int a, b, c, largest;                            // Declare variables for calculation
    printf("Enter three numbers: ");                 // Prompt user for input
    if (scanf("%d %d %d", &a, &b, &c) == 3) {        // Read input from user
        if (a >= b && a >= c)                        // Check condition
            largest = a;                             // Perform calculation
        else if (b >= a && b >= c)
            largest = b;                             // Perform calculation
        else
            largest = c;                             // Perform calculation
        printf("Largest number is: %d\n", largest);  // Display find the largest of three numbers result
    }
    return 0;                                        // Exit program successfully
}
