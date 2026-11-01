#include <stdio.h>
#include <stdbool.h>

int main(void) {
    char str[] = "Programming with C is fast and efficient";      // Initialize variable
    int words = 0;                                                // Initialize variable
    bool inWord = false;                                          // Initialize variable

    for (int i = 0; str[i] != '\0'; i++) {                        // Iterate through loop
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {  // Check condition
            if (!inWord) {                                        // Check condition
                words++;
                inWord = true;                                    // Perform calculation
            }
        } else {
            inWord = false;                                       // Perform calculation
        }
    }

    printf("Sentence: \"%s\"\n", str);                            // Display count words in a sentence result
    printf("Total words: %d\n", words);                           // Display count words in a sentence result
    return 0;                                                     // Exit program successfully
}
