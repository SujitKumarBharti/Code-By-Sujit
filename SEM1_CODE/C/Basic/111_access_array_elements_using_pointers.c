#include <stdio.h>

int main(void) {
    int arr[] = {10, 20, 30, 40, 50};                                                         // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                                                     // Initialize variable
    int *ptr = arr;                                                                           // Initialize variable

    printf("Array elements accessed via pointer:\n");                                         // Display access array elements using poin... result
    for (int i = 0; i < n; i++) {                                                             // Iterate through loop
        printf("Element at index %d: %d (Address: %p)\n", i, *(ptr + i), (void *)(ptr + i));  // Display access array elements using poin... result
    }
    return 0;                                                                                 // Exit program successfully
}
