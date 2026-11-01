#include <stdio.h>

int main(void) {
    int lines;                                             // Declare variable

    printf("Enter number of lines: ");                     // Prompt user to enter number of lines
    if (scanf("%d", &lines) != 1 || lines < 1) {           // Require a positive count
        printf("Enter a positive number of lines.\n");     // Prompt user to enter a positive number of lines.\n
        return 1;                                          // Exit with error status code
    }

    for (int row = 1; row <= lines; row++) {               // Loop through elements
        for (int space = row; space < lines; space++) {    // Loop through elements
            printf(" ");                                   // Display output result
        }
        for (int star = 1; star <= 2 * row - 1; star++) {  // Loop through elements
            printf("*");                                   // Display *
        }
        printf("\n");                                      // Display output result
    }
    return 0;                                              // Exit program successfully
}
