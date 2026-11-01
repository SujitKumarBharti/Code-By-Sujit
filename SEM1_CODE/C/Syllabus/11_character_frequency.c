#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int frequencies[26] = {0};                                                           // Initialize variable

    if (argc < 2) {                                                                      // Evaluate comparison condition
        printf("Usage: program text [more text]\n");                                     // Display usage
        return 1;                                                                        // Exit with error status code
    }
    for (int argument = 1; argument < argc; argument++) {                                // Loop through elements
        for (const char *character = argv[argument]; *character != '\0'; character++) {  // Loop through elements
            if (isalpha((unsigned char)*character)) {                                    // Check condition
                frequencies[tolower((unsigned char)*character) - 'a']++;                 // Increment counter
            }
        }
    }
    for (int letter = 0; letter < 26; letter++) {                                        // Loop through elements
        if (frequencies[letter] > 0) {                                                   // Evaluate comparison condition
            printf("%c: %d\n", 'a' + letter, frequencies[letter]);                       // Display ,
        }
    }
    return 0;                                                                            // Exit program successfully
}
