#include <stdio.h>

int binarySearch(int arr[], int n, int key) {                   // Declare variables for calculation
    int low = 0, high = n - 1;                                  // Initialize variable
    while (low <= high) {                                       // Iterate through loop
        int mid = low + (high - low) / 2;                       // Initialize variable
        if (arr[mid] == key) return mid;                        // Check condition
        if (arr[mid] < key) low = mid + 1;                      // Check condition
        else high = mid - 1;                                    // Perform calculation
    }
    return -1;
}

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};          // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                       // Initialize variable
    int key = 23;                                               // Initialize variable
    int index = binarySearch(arr, n, key);                      // Initialize variable
    if (index != -1)                                            // Check condition
        printf("Element %d found at index %d.\n", key, index);  // Display implement Binary Search result
    else
        printf("Element %d not found in array.\n", key);        // Display implement Binary Search result
    return 0;                                                   // Exit program successfully
}
