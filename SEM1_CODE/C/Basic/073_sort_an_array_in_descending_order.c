#include <stdio.h>

int main(void) {
    int n, arr[100];                                        // Declare variables for calculation
    printf("Enter number of elements: ");                   // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {        // Read input from user
        printf("Enter %d elements: ", n);                   // Prompt user for input
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);   // Read input from user
        for (int i = 0; i < n - 1; i++) {                   // Iterate through loop
            for (int j = 0; j < n - i - 1; j++) {           // Iterate through loop
                if (arr[j] < arr[j + 1]) {                  // Check condition
                    int temp = arr[j];                      // Initialize variable
                    arr[j] = arr[j + 1];                    // Perform calculation
                    arr[j + 1] = temp;                      // Perform calculation
                }
            }
        }
        printf("Descending order: ");                       // Display sort an array in descending order result
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display sort an array in descending order result
        printf("\n");                                       // Display sort an array in descending order result
    }
    return 0;                                               // Exit program successfully
}
