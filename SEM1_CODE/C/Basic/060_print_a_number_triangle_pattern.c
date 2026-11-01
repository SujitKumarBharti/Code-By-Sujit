#include <stdio.h>

int main(void) {
    int rows = 5;                            // Initialize variable
    for (int i = 1; i <= rows; i++) {        // Iterate through loop
        for (int j = 1; j <= i; j++) {       // Iterate through loop
            printf("%d ", j);                // Display print a number triangle pattern result
        }
        printf("\n");                        // Display print a number triangle pattern result
    }
    return 0;                                // Exit program successfully
}
