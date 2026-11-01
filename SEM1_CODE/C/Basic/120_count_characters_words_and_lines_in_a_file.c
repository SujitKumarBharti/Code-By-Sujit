#include <stdio.h>
#include <stdbool.h>

int main(void) {
    FILE *fp = fopen("output.txt", "r");                                                   // Perform calculation
    if (fp == NULL) {                                                                      // Check condition
        printf("File output.txt not found. Please create it or run file write first.\n");  // Display count characters, words, and lin... result
        return 1;
    }

    int characters = 0, words = 0, lines = 0;                                              // Initialize variable
    char ch;                                                                               // Declare variables for calculation
    bool inWord = false;                                                                   // Initialize variable

    while ((ch = fgetc(fp)) != EOF) {                                                      // Iterate through loop
        characters++;
        if (ch == '\n') lines++;                                                           // Check condition

        if (ch != ' ' && ch != '\t' && ch != '\n') {                                       // Check condition
            if (!inWord) {                                                                 // Check condition
                words++;
                inWord = true;                                                             // Perform calculation
            }
        } else {
            inWord = false;                                                                // Perform calculation
        }
    }

    fclose(fp);

    printf("File Statistics for output.txt:\n");                                           // Display count characters, words, and lin... result
    printf("Characters: %d\n", characters);                                                // Display count characters, words, and lin... result
    printf("Words     : %d\n", words);                                                     // Display count characters, words, and lin... result
    printf("Lines     : %d\n", lines);                                                     // Display count characters, words, and lin... result
    return 0;                                                                              // Exit program successfully
}
