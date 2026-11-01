#include <stdio.h>

int main(void) {
    int a, b, x, y, gcd, lcm;                            // Declare variables for calculation
    printf("Enter two numbers: ");                       // Prompt user for input
    if (scanf("%d %d", &a, &b) == 2) {                   // Read input from user
        x = a; y = b;                                    // Perform calculation
        while (y != 0) {                                 // Iterate through loop
            int temp = y;                                // Initialize variable
            y = x % y;                                   // Perform calculation
            x = temp;                                    // Perform calculation
        }
        gcd = (x < 0) ? -x : x;                          // Perform calculation
        lcm = (a * b) / gcd;                             // Perform calculation
        if (lcm < 0) lcm = -lcm;                         // Check condition
        printf("LCM of %d and %d is: %d\n", a, b, lcm);  // Display find the LCM of two numbers result
    }
    return 0;                                            // Exit program successfully
}
