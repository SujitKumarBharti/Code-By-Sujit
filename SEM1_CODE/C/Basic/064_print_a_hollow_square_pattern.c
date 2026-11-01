#include <stdio.h>

int main(void) {
    int size = 5;                                            // Initialize variable
    for (int i = 1; i <= size; i++) {                        // Iterate through loop
        for (int j = 1; j <= size; j++) {                    // Iterate through loop
            if (i == 1 || i == size || j == 1 || j == size)  // Check condition
                printf("* ");                                // Display print a hollow square pattern result
            else
                printf("  ");                                // Display print a hollow square pattern result
        }
        printf("\n");                                        // Display print a hollow square pattern result
    }
    return 0;                                                // Exit program successfully
}
