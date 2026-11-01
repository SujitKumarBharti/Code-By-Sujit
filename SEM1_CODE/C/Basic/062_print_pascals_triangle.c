#include <stdio.h>

int main(void) {
    int rows = 5;                                                     // Initialize variable
    for (int i = 0; i < rows; i++) {                                  // Iterate through loop
        int val = 1;                                                  // Initialize variable
        for (int space = 1; space <= rows - i; space++) printf(" ");  // Display print Pascal's triangle result
        for (int j = 0; j <= i; j++) {                                // Iterate through loop
            printf("%d ", val);                                       // Display print Pascal's triangle result
            val = val * (i - j) / (j + 1);                            // Perform calculation
        }
        printf("\n");                                                 // Display print Pascal's triangle result
    }
    return 0;                                                         // Exit program successfully
}
