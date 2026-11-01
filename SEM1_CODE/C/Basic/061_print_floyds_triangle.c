#include <stdio.h>

int main(void) {
    int rows = 5, num = 1;                   // Initialize variable
    for (int i = 1; i <= rows; i++) {        // Iterate through loop
        for (int j = 1; j <= i; j++) {       // Iterate through loop
            printf("%d ", num++);            // Display print Floyd's triangle result
        }
        printf("\n");                        // Display print Floyd's triangle result
    }
    return 0;                                // Exit program successfully
}
