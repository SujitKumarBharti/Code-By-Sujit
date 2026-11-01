#include <stdio.h>

#define ARRAY_SIZE 10

void reverse_array(int *values) {
    for (int left = 0, right = ARRAY_SIZE - 1; left < right; left++, right--) {     // Loop through elements
        int temporary = values[left];                                               // Initialize variable
        values[left] = values[right];                                               // Calculate and assign value
        values[right] = temporary;                                                  // Swap value using temporary variable
    }
}

int main(void) {
    int values[ARRAY_SIZE];                                                         // Declare variable

    printf("Enter %d integers: ", ARRAY_SIZE);                                      // Prompt user to enter %d integers
    for (int index = 0; index < ARRAY_SIZE; index++)                                // Loop through elements
        if (scanf("%d", &values[index]) != 1) return 1;                             // Read user input values
    reverse_array(values);
    printf("Reversed array:");                                                      // Display reversed array
    for (int index = 0; index < ARRAY_SIZE; index++) printf(" %d", values[index]);  // Display output result
    printf("\n");                                                                   // Display output result
    return 0;                                                                       // Exit program successfully
}
