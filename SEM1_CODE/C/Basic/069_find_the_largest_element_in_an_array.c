#include <stdio.h>

int main(void) {
    int n, arr[100];                                       // Declare variables for calculation
    printf("Enter number of elements: ");                  // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {       // Read input from user
        printf("Enter %d elements: ", n);                  // Prompt user for input
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);  // Read input from user
        int max = arr[0];                                  // Initialize variable
        for (int i = 1; i < n; i++) {                      // Iterate through loop
            if (arr[i] > max) max = arr[i];                // Check condition
        }
        printf("Largest element: %d\n", max);              // Display find the largest element in an a... result
    }
    return 0;                                              // Exit program successfully
}
