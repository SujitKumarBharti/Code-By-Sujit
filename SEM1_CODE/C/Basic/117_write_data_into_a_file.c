#include <stdio.h>

int main(void) {
    FILE *fp = fopen("output.txt", "w");                          // Perform calculation
    if (fp == NULL) {                                             // Check condition
        printf("Error opening file!\n");                          // Display error message for invalid input
        return 1;
    }

    fprintf(fp, "Hello, this is a test line in output.txt\n");    // Display write data into a file result
    fprintf(fp, "C programming file handling demonstration.\n");  // Display write data into a file result

    fclose(fp);
    printf("Data written successfully to output.txt\n");          // Display write data into a file result
    return 0;                                                     // Exit program successfully
}
