#include <stdio.h>

int main(void) {
    int rows = 5;                            // Initialize variable
    for (int i = rows; i >= 1; i--) {        // Iterate through loop
        for (int j = 1; j <= i; j++) {       // Iterate through loop
            printf("* ");                    // Display print an inverted triangle star ... result
        }
        printf("\n");                        // Display print an inverted triangle star ... result
    }
    return 0;                                // Exit program successfully
}
