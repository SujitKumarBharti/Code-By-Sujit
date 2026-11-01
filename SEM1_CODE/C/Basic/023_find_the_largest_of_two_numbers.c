#include <stdio.h>

int main(void) {
    int a, b;                                             // Declare variables for calculation
    printf("Enter two numbers: ");                        // Prompt user for input
    if (scanf("%d %d", &a, &b) == 2) {                    // Read input from user
        if (a > b)                                        // Check condition
            printf("%d is larger than %d\n", a, b);       // Display find the largest of two numbers result
        else if (b > a)
            printf("%d is larger than %d\n", b, a);       // Display find the largest of two numbers result
        else
            printf("Both numbers are equal (%d).\n", a);  // Display find the largest of two numbers result
    }
    return 0;                                             // Exit program successfully
}
