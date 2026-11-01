#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {                       // Iterate through loop
        for (int j = 0; j < n - i - 1; j++) {               // Iterate through loop
            if (arr[j] > arr[j + 1]) {                      // Check condition
                int t = arr[j];                             // Initialize variable
                arr[j] = arr[j + 1];                        // Perform calculation
                arr[j + 1] = t;                             // Perform calculation
            }
        }
    }
}

int main(void) {
    int arr[] = {4, 2, 7, 2, 8, 4, 3, 1};                   // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                   // Initialize variable

    sort(arr, n);

    printf("Duplicate elements: ");                         // Display find duplicate elements using so... result
    int found = 0;                                          // Initialize variable
    for (int i = 0; i < n - 1; i++) {                       // Iterate through loop
        if (arr[i] == arr[i + 1]) {                         // Check condition
            printf("%d ", arr[i]);                          // Display find duplicate elements using so... result
            found = 1;                                      // Perform calculation
            while (i < n - 1 && arr[i] == arr[i + 1]) i++;  // Skip repeated duplicates
        }
    }
    if (!found) printf("None");                             // Display find duplicate elements using so... result
    printf("\n");                                           // Display find duplicate elements using so... result
    return 0;                                               // Exit program successfully
}
