#include <stdio.h>

int main(void) {
    int n, arr[100], key, low, high, mid, pos = -1;                   // Initialize variable
    printf("Enter number of elements (must be sorted): ");            // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {                  // Read input from user
        printf("Enter %d sorted elements: ", n);                      // Prompt user for input
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);             // Read input from user
        printf("Enter element to search: ");                          // Prompt user for input
        if (scanf("%d", &key) == 1) {                                 // Read input from user
            low = 0; high = n - 1;                                    // Perform calculation
            while (low <= high) {                                     // Iterate through loop
                mid = low + (high - low) / 2;                         // Perform calculation
                if (arr[mid] == key) {                                // Check condition
                    pos = mid;                                        // Perform calculation
                    break;
                } else if (arr[mid] < key) {                          // Check condition
                    low = mid + 1;                                    // Perform calculation
                } else {
                    high = mid - 1;                                   // Perform calculation
                }
            }
            if (pos != -1)                                            // Check condition
                printf("Element %d found at index %d.\n", key, pos);  // Display search an element using Binary S... result
            else
                printf("Element %d not found.\n", key);               // Display search an element using Binary S... result
        }
    }
    return 0;                                                         // Exit program successfully
}
