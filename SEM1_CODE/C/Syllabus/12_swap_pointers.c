#include <stdio.h>

void swap(int *first, int *second) {
    int temporary = *first;                              // Initialize variable
    *first = *second;                                    // Calculate and assign value
    *second = temporary;                                 // Swap value using temporary variable
}

int main(void) {
    int first;                                           // Declare variable
    int second;                                          // Declare variable

    printf("Enter two integers: ");                      // Prompt user to enter two integers
    if (scanf("%d %d", &first, &second) != 2) return 1;  // Read user input values
    swap(&first, &second);
    printf("After swapping: %d %d\n", first, second);    // Display after swapping
    return 0;                                            // Exit program successfully
}
