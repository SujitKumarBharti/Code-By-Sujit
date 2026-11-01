#include <stdio.h>

int main(void) {
    int n, arr[100], evenCount = 0, oddCount = 0;     // Initialize variable
    printf("Enter number of elements: ");             // Prompt user for input
    if (scanf("%d", &n) == 1 && n > 0 && n <= 100) {  // Read input from user
        printf("Enter %d elements: ", n);             // Prompt user for input
        for (int i = 0; i < n; i++) {                 // Iterate through loop
            scanf("%d", &arr[i]);                     // Read input from user
            if (arr[i] % 2 == 0) evenCount++;         // Check condition
            else oddCount++;
        }
        printf("Even elements: %d\n", evenCount);     // Display count even and odd elements in a... result
        printf("Odd elements : %d\n", oddCount);      // Display count even and odd elements in a... result
    }
    return 0;                                         // Exit program successfully
}
