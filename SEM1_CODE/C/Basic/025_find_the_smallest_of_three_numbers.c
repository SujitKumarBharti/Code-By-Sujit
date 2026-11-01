#include <stdio.h>

int main(void) {
    int a, b, c, smallest;                             // Declare variables for calculation
    printf("Enter three numbers: ");                   // Prompt user for input
    if (scanf("%d %d %d", &a, &b, &c) == 3) {          // Read input from user
        if (a <= b && a <= c)                          // Check condition
            smallest = a;                              // Perform calculation
        else if (b <= a && b <= c)
            smallest = b;                              // Perform calculation
        else
            smallest = c;                              // Perform calculation
        printf("Smallest number is: %d\n", smallest);  // Display find the smallest of three numbers result
    }
    return 0;                                          // Exit program successfully
}
