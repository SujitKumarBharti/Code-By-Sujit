#include <stdio.h>

int linearSearch(int arr[], int n, int key) {                   // Declare variables for calculation
    for (int i = 0; i < n; i++) {                               // Iterate through loop
        if (arr[i] == key) return i;                            // Check condition
    }
    return -1;
}

int main(void) {
    int arr[] = {15, 23, 7, 42, 19, 8};                         // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                       // Initialize variable
    int key = 42;                                               // Initialize variable
    int index = linearSearch(arr, n, key);                      // Initialize variable
    if (index != -1)                                            // Check condition
        printf("Element %d found at index %d.\n", key, index);  // Display implement Linear Search result
    else
        printf("Element %d not found in array.\n", key);        // Display implement Linear Search result
    return 0;                                                   // Exit program successfully
}
