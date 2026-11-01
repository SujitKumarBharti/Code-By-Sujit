#include <stdio.h>

int main(void) {
    int arr[] = {5, 10, 15, 20, 25};                            // Initialize variable
    int n = sizeof(arr) / sizeof(arr[0]);                       // Initialize variable
    int *ptr = arr;                                             // Initialize variable
    int sum = 0;                                                // Initialize variable

    for (int i = 0; i < n; i++) {                               // Iterate through loop
        sum += *(ptr + i);                                      // Perform calculation
    }

    printf("Sum of array elements using pointers: %d\n", sum);  // Display find the sum of array elements u... result
    return 0;                                                   // Exit program successfully
}
