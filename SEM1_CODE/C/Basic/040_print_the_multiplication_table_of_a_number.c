#include <stdio.h>

int main(void) {
    int n;                                           // Declare variables for calculation
    printf("Enter an integer: ");                    // Prompt user for input
    if (scanf("%d", &n) == 1) {                      // Read input from user
        for (int i = 1; i <= 10; i++) {              // Iterate through loop
            printf("%d x %2d = %d\n", n, i, n * i);  // Display print the multiplication table o... result
        }
    }
    return 0;                                        // Exit program successfully
}
