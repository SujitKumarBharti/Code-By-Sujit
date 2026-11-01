#include <stdio.h>

int main(void) {
    int n, src[100], dest[100];                              // Declare variables for calculation
    printf("Enter number of elements: ");                    // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {         // Read input from user
        printf("Enter %d elements: ", n);                    // Prompt user for input
        for (int i = 0; i < n; i++) {                        // Iterate through loop
            scanf("%d", &src[i]);                            // Read input from user
            dest[i] = src[i];                                // Perform calculation
        }
        printf("Copied array: ");                            // Display copy one array into another result
        for (int i = 0; i < n; i++) printf("%d ", dest[i]);  // Display copy one array into another result
        printf("\n");                                        // Display copy one array into another result
    }
    return 0;                                                // Exit program successfully
}
