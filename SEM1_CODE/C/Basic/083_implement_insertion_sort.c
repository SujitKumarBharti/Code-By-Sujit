#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {                       // Iterate through loop
        int key = arr[i];                               // Initialize variable
        int j = i - 1;                                  // Initialize variable
        while (j >= 0 && arr[j] > key) {                // Iterate through loop
            arr[j + 1] = arr[j];                        // Perform calculation
            j--;
        }
        arr[j + 1] = key;                               // Perform calculation
    }
}

int main(void) {
    int arr[] = {12, 11, 13, 5, 6};                     // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);               // Initialize variable
    printf("Original array: ");                         // Display implement Insertion Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display implement Insertion Sort result
    printf("\n");                                       // Display implement Insertion Sort result

    insertionSort(arr, n);

    printf("Sorted array (Insertion Sort): ");          // Display implement Insertion Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display implement Insertion Sort result
    printf("\n");                                       // Display implement Insertion Sort result
    return 0;                                           // Exit program successfully
}
