#include <stdio.h>

int main(void) {
    int n, arr[100];                                        // Declare variables for calculation
    printf("Enter number of elements: ");                   // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {        // Read input from user
        printf("Enter %d elements: ", n);                   // Prompt user for input
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);   // Read input from user

        for (int i = 0, j = n - 1; i < j; i++, j--) {       // Iterate through loop
            int temp = arr[i];                              // Initialize variable
            arr[i] = arr[j];                                // Perform calculation
            arr[j] = temp;                                  // Perform calculation
        }
        printf("Reversed array: ");                         // Display reverse an array result
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display reverse an array result
        printf("\n");                                       // Display reverse an array result
    }
    return 0;                                               // Exit program successfully
}
