#include <stdio.h>

#define MAX_SIZE 100

int main(void) {
    int first[MAX_SIZE];                                                        // Declare variable
    int second[MAX_SIZE];                                                       // Declare variable
    int merged[MAX_SIZE * 2];                                                   // Declare variable
    int first_count;                                                            // Declare variable
    int second_count;                                                           // Declare variable
    int left = 0;                                                               // Initialize variable
    int right = 0;                                                              // Initialize variable
    int output = 0;                                                             // Initialize variable

    printf("Enter sizes of the two sorted arrays: ");                           // Prompt user to enter sizes of the two sorted arrays
    if (scanf("%d %d", &first_count, &second_count) != 2 || first_count < 0 ||  // Read user input values
        second_count < 0 || first_count > MAX_SIZE || second_count > MAX_SIZE) {
        return 1;                                                               // Exit with error status code
    }
    printf("Enter first sorted array: ");                                       // Prompt user to enter first sorted array
    for (int index = 0; index < first_count; index++)                           // Loop through elements
        if (scanf("%d", &first[index]) != 1) return 1;                          // Read user input values
    printf("Enter second sorted array: ");                                      // Prompt user to enter second sorted array
    for (int index = 0; index < second_count; index++)                          // Loop through elements
        if (scanf("%d", &second[index]) != 1) return 1;                         // Read user input values

    while (left < first_count && right < second_count) {                        // Iterate while condition holds
        merged[output++] = first[left] <= second[right]
                               ? first[left++]
                               : second[right++];
    }
    while (left < first_count) merged[output++] = first[left++];                // Iterate while condition holds
    while (right < second_count) merged[output++] = second[right++];            // Iterate while condition holds
    printf("Merged array:");                                                    // Display merged array
    for (int index = 0; index < output; index++) printf(" %d", merged[index]);  // Display output result
    printf("\n");                                                               // Display output result
    return 0;                                                                   // Exit program successfully
}
