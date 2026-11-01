#include <stdio.h>

int main(void) {
    int n, arr[100], sum = 0;                         // Initialize variable
    printf("Enter number of elements: ");             // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {  // Read input from user
        printf("Enter %d elements: ", n);             // Prompt user for input
        for (int i = 0; i < n; i++) {                 // Iterate through loop
            scanf("%d", &arr[i]);                     // Read input from user
            sum += arr[i];                            // Perform calculation
        }
        printf("Sum of array elements: %d\n", sum);   // Display find the sum of array elements result
    }
    return 0;                                         // Exit program successfully
}
