#include <stdio.h>

int main(void) {
    int rows = 5;                               // Initialize variable
    for (int i = 1; i <= rows; i++) {           // Iterate through loop
        for (int j = 1; j <= rows - i; j++) {   // Iterate through loop
            printf(" ");                        // Display print a pyramid star pattern result
        }
        for (int k = 1; k <= 2 * i - 1; k++) {  // Iterate through loop
            printf("*");                        // Display print a pyramid star pattern result
        }
        printf("\n");                           // Display print a pyramid star pattern result
    }
    return 0;                                   // Exit program successfully
}
