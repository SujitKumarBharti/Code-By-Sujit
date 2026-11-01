#include <stdio.h>

int partition(int arr[], int low, int high) {           // Declare variables for calculation
    int pivot = arr[high];                              // Initialize variable
    int i = low - 1;                                    // Initialize variable
    for (int j = low; j < high; j++) {                  // Iterate through loop
        if (arr[j] < pivot) {                           // Check condition
            i++;
            int temp = arr[i];                          // Initialize variable
            arr[i] = arr[j];                            // Perform calculation
            arr[j] = temp;                              // Perform calculation
        }
    }
    int temp = arr[i + 1];                              // Initialize variable
    arr[i + 1] = arr[high];                             // Perform calculation
    arr[high] = temp;                                   // Perform calculation
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {                                   // Check condition
        int pi = partition(arr, low, high);             // Initialize variable
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(void) {
    int arr[] = {10, 7, 8, 9, 1, 5};                    // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);               // Initialize variable
    printf("Original array: ");                         // Display implement Quick Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display implement Quick Sort result
    printf("\n");                                       // Display implement Quick Sort result

    quickSort(arr, 0, n - 1);

    printf("Sorted array (Quick Sort): ");              // Display implement Quick Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);  // Display implement Quick Sort result
    printf("\n");                                       // Display implement Quick Sort result
    return 0;                                           // Exit program successfully
}
