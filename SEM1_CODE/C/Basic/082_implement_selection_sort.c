#include <stdio.h>

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {                   // Iterate through loop
        int min_idx = i;                                // Initialize variable
        for (int j = i + 1; j < n; j++) {               // Iterate through loop
            if (arr[j] < arr[min_idx]) min_idx = j;     // Check condition
        }
        int temp = arr[min_idx];                        // Initialize variable
        arr[min_idx] = arr[i];                          // Perform calculation
        arr[i] = temp;                                  // Perform calculation
    }
}

int main(void) {
    int arr[] = {29, 10, 14, 37, 13};                   // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);               // Initialize variable
    printf("Original array: ");                         // Display implement Selection Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display implement Selection Sort result
    printf("\n");                                       // Display implement Selection Sort result

    selectionSort(arr, n);

    printf("Sorted array (Selection Sort): ");          // Display implement Selection Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display implement Selection Sort result
    printf("\n");                                       // Display implement Selection Sort result
    return 0;                                           // Exit program successfully
}
