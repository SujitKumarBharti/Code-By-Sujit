#include <stdio.h>

int main(void) {
    int n, arr[100];                                        // Declare variables for calculation
    printf("Enter number of elements: ");                   // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {        // Read input from user
        printf("Enter %d elements: ", n);                   // Prompt user for input
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);   // Read input from user
        printf("Array elements are: ");                     // Display read and display array elements result
        for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display read and display array elements result
        printf("\n");                                       // Display read and display array elements result
    }
    return 0;                                               // Exit program successfully
}
