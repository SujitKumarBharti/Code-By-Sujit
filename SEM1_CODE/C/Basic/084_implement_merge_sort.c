#include <stdio.h>

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;                                  // Initialize variable
    int n2 = r - m;                                      // Initialize variable
    int L[50], R[50];                                    // Declare variables for calculation
    for (int i = 0; i < n1; i++) L[i] = arr[l + i];      // Iterate through loop
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];  // Iterate through loop

    int i = 0, j = 0, k = l;                             // Initialize variable
    while (i < n1 && j < n2) {                           // Iterate through loop
        if (L[i] <= R[j]) arr[k++] = L[i++];             // Check condition
        else arr[k++] = R[j++];                          // Perform calculation
    }
    while (i < n1) arr[k++] = L[i++];                    // Iterate through loop
    while (j < n2) arr[k++] = R[j++];                    // Iterate through loop
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {                                         // Check condition
        int m = l + (r - l) / 2;                         // Initialize variable
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main(void) {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};              // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                // Initialize variable
    printf("Original array: ");                          // Display implement Merge Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);   // Display implement Merge Sort result
    printf("\n");                                        // Display implement Merge Sort result

    mergeSort(arr, 0, n - 1);

    printf("Sorted array (Merge Sort): ");               // Display implement Merge Sort result
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);   // Display implement Merge Sort result
    printf("\n");                                        // Display implement Merge Sort result
    return 0;                                            // Exit program successfully
}
