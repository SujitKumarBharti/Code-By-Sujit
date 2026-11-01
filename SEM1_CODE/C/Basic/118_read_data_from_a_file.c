#include <stdio.h>

int main(void) {
    FILE *fp = fopen("output.txt", "r");                                  // Perform calculation
    if (fp == NULL) {                                                     // Check condition
        printf("output.txt not found. Creating a sample file first.\n");  // Display read data from a file result
        fp = fopen("output.txt", "w");                                    // Perform calculation
        if (fp != NULL) {                                                 // Check condition
            fprintf(fp, "Sample content for reading demonstration.\n");   // Display read data from a file result
            fclose(fp);
        }
        fp = fopen("output.txt", "r");                                    // Perform calculation
    }

    char buffer[256];                                                     // Declare variables for calculation
    printf("Contents of output.txt:\n");                                  // Display read data from a file result
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {                   // Iterate through loop
        printf("%s", buffer);                                             // Display read data from a file result
    }

    fclose(fp);
    return 0;                                                             // Exit program successfully
}
