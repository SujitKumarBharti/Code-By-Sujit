#include <stdio.h>

int main(void) {
    int n, arr[100], key, pos = -1;                                                          // Initialize variable
    printf("Enter number of elements: ");                                                    // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {                                         // Read input from user
        printf("Enter %d elements: ", n);                                                    // Prompt user for input
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);                                    // Read input from user
        printf("Enter element to search: ");                                                 // Prompt user for input
        if (scanf("%d", &key) == 1) {                                                        // Read input from user
            for (int i = 0; i < n; i++) {                                                    // Iterate through loop
                if (arr[i] == key) {                                                         // Check condition
                    pos = i;                                                                 // Perform calculation
                    break;
                }
            }
            if (pos != -1)                                                                   // Check condition
                printf("Element %d found at index %d (position %d).\n", key, pos, pos + 1);  // Display search an element using Linear S... result
            else
                printf("Element %d not found in array.\n", key);                             // Display search an element using Linear S... result
        }
    }
    return 0;                                                                                // Exit program successfully
}
