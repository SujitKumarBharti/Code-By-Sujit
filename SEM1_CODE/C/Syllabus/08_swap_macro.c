#include <stdio.h>

#define SWAP_VALUES(first, second) do { \
    int temporary = (first);             \
    (first) = (second);                  \
    (second) = temporary;                \
} while (0)

int main(void) {
    int first;                                         // Store first integer value
    int second;                                        // Store second integer value

    printf("Enter two integers: ");                    // Prompt user for input
    if (scanf("%d %d", &first, &second) != 2) {        // Read two integer values
        return 1;                                      // Exit with error if input invalid
    }

    SWAP_VALUES(first, second);                        // Swap values using macro
    printf("After swapping: %d %d\n", first, second);  // Display swapped values
    return 0;                                          // Exit successfully
}
