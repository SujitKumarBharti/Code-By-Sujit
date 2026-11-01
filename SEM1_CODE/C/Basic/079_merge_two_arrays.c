#include <stdio.h>

int main(void) {
    int n1, n2, a[50], b[50], merged[100];                               // Declare variables for calculation
    printf("Enter size of first array: ");                               // Prompt user for input
    if (scanf("%d", &n1) == 1 && n1 > 0 && n1 <= 50) {                   // Read input from user
        printf("Enter %d elements for first array: ", n1);               // Prompt user for input
        for (int i = 0; i < n1; i++) scanf("%d", &a[i]);                 // Read input from user

        printf("Enter size of second array: ");                          // Prompt user for input
        if (scanf("%d", &n2) == 1 && n2 > 0 && n2 <= 50) {               // Read input from user
            printf("Enter %d elements for second array: ", n2);          // Prompt user for input
            for (int i = 0; i < n2; i++) scanf("%d", &b[i]);             // Read input from user

            for (int i = 0; i < n1; i++) merged[i] = a[i];               // Iterate through loop
            for (int i = 0; i < n2; i++) merged[n1 + i] = b[i];          // Iterate through loop

            printf("Merged array: ");                                    // Display merge two arrays result
            for (int i = 0; i < n1 + n2; i++) printf("%d ", merged[i]);  // Display merge two arrays result
            printf("\n");                                                // Display merge two arrays result
        }
    }
    return 0;                                                            // Exit program successfully
}
