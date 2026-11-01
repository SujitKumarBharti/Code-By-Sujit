#include <stdio.h>

void sortDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {                                 // Iterate through loop
        for (int j = 0; j < n - i - 1; j++) {                         // Iterate through loop
            if (arr[j] < arr[j + 1]) {                                // Check condition
                int t = arr[j];                                       // Initialize variable
                arr[j] = arr[j + 1];                                  // Perform calculation
                arr[j + 1] = t;                                       // Perform calculation
            }
        }
    }
}

int main(void) {
    int arr[] = {12, 3, 5, 7, 19, 26, 4};                             // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                             // Initialize variable
    int k = 3;                                                        // Initialize variable

    sortDesc(arr, n);

    if (k > 0 && k <= n) {                                            // Check condition
        printf("The %d-th largest element is: %d\n", k, arr[k - 1]);  // Display find the Kth largest element in ... result
    } else {
        printf("Invalid value of K.\n");                              // Display error message for invalid input
    }
    return 0;                                                         // Exit program successfully
}
