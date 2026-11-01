#include <stdio.h>
#include <limits.h>

int main(void) {
    int n, arr[100];                                                   // Declare variables for calculation
    printf("Enter number of elements: ");                              // Prompt user for input
    if (scanf("%d", &n) == 1 && n >= 2 && n <= 100) {                  // Read input from user
        printf("Enter %d elements: ", n);                              // Prompt user for input
        for (int i = 0; i < n; i++) scanf("%d", &arr[i]);              // Read input from user
        int first = INT_MIN, second = INT_MIN;                         // Initialize variable
        for (int i = 0; i < n; i++) {                                  // Iterate through loop
            if (arr[i] > first) {                                      // Check condition
                second = first;                                        // Perform calculation
                first = arr[i];                                        // Perform calculation
            } else if (arr[i] > second && arr[i] != first) {           // Check condition
                second = arr[i];                                       // Perform calculation
            }
        }
        if (second == INT_MIN)                                         // Check condition
            printf("There is no distinct second largest element.\n");  // Display find the second-largest element ... result
        else
            printf("Second largest element: %d\n", second);            // Display find the second-largest element ... result
    }
    return 0;                                                          // Exit program successfully
}
