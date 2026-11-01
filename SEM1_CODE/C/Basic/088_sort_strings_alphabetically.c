#include <stdio.h>
#include <string.h>

int main(void) {
    char str[5][50] = {"Banana", "Apple", "Mango", "Cherry", "Date"};  // Initialize variable
    int n = 5;                                                         // Initialize variable
    char temp[50];                                                     // Declare variables for calculation

    printf("Original strings:\n");                                     // Display sort strings alphabetically result
    for (int i = 0; i < n; i++) printf("  %s\n", str[i]);              // Display sort strings alphabetically result

    for (int i = 0; i < n - 1; i++) {                                  // Iterate through loop
        for (int j = i + 1; j < n; j++) {                              // Iterate through loop
            if (strcmp(str[i], str[j]) > 0) {                          // Check condition
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    printf("Strings sorted alphabetically:\n");                        // Display sort strings alphabetically result
    for (int i = 0; i < n; i++) printf("  %s\n", str[i]);              // Display sort strings alphabetically result
    return 0;                                                          // Exit program successfully
}
