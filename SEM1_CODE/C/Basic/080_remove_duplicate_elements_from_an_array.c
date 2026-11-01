#include <stdio.h>

int main(void) {
    int n, arr[100], unique[100], k = 0;                       // Initialize variable
    printf("Enter number of elements: ");                      // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {           // Read input from user
        printf("Enter %d elements: ", n);                      // Prompt user for input
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);      // Read input from user
        for (int i = 0; i < n; i++) {                          // Iterate through loop
            int exists = 0;                                    // Initialize variable
            for (int j = 0; j < k; j++) {                      // Iterate through loop
                if (arr[i] == unique[j]) {                     // Check condition
                    exists = 1;                                // Perform calculation
                    break;
                }
            }
            if (!exists) {                                     // Check condition
                unique[k++] = arr[i];                          // Perform calculation
            }
        }
        printf("Array after removing duplicates: ");           // Display remove duplicate elements from a... result
        for (int i = 0; i < k; i++) printf("%d ", unique[i]);  // Display remove duplicate elements from a... result
        printf("\n");                                          // Display remove duplicate elements from a... result
    }
    return 0;                                                  // Exit program successfully
}
