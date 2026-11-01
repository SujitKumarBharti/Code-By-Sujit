#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {                   // Iterate through loop
        for (int j = 0; j < n - i - 1; j++) {           // Iterate through loop
            if (arr[j] > arr[j + 1]) {                  // Check condition
                int temp = arr[j];                      // Initialize variable
                arr[j] = arr[j + 1];                    // Perform calculation
                arr[j + 1] = temp;                      // Perform calculation
            }
        }
    }
}

int main(void) {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};           // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);               // Initialize variable
    printf("Original array: ");                         // Display implement Bubble Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display implement Bubble Sort result
    printf("\n");                                       // Display implement Bubble Sort result

    bubbleSort(arr, n);

    printf("Sorted array (Bubble Sort): ");             // Display implement Bubble Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display implement Bubble Sort result
    printf("\n");                                       // Display implement Bubble Sort result
    return 0;                                           // Exit program successfully
}
