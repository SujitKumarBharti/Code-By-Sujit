#include <stdio.h>

int main(void) {
    FILE *fp = fopen("output.txt", "a");                        // Perform calculation
    if (fp == NULL) {                                           // Check condition
        printf("Error opening file for appending!\n");          // Display error message for invalid input
        return 1;
    }

    fprintf(fp, "Appended line: Learning C file handling.\n");  // Display append data to a file result
    fclose(fp);

    printf("Data appended successfully to output.txt\n");       // Display append data to a file result
    return 0;                                                   // Exit program successfully
}
