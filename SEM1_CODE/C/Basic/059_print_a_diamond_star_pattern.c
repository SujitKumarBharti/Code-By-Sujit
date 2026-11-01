#include <stdio.h>

int main(void) {
    int n = 5;                                             // Initialize variable

    for (int i = 1; i <= n; i++) {                         // Iterate through loop
        for (int j = 1; j <= n - i; j++) printf(" ");      // Display print a diamond star pattern result
        for (int k = 1; k <= 2 * i - 1; k++) printf("*");  // Display print a diamond star pattern result
        printf("\n");                                      // Display print a diamond star pattern result
    }

    for (int i = n - 1; i >= 1; i--) {                     // Iterate through loop
        for (int j = 1; j <= n - i; j++) printf(" ");      // Display print a diamond star pattern result
        for (int k = 1; k <= 2 * i - 1; k++) printf("*");  // Display print a diamond star pattern result
        printf("\n");                                      // Display print a diamond star pattern result
    }
    return 0;                                              // Exit program successfully
}
