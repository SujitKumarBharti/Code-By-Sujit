#include <stdio.h>

int main(void) {
    char str[] = "programming";                   // Initialize variable
    int freq[256] = {0};                          // Initialize variable

    for (int i = 0; str[i] != '\0'; i++) {        // Iterate through loop
        freq[(unsigned char)str[i]]++;
    }

    printf("String: \"%s\"\n", str);              // Display count the frequency of each char... result
    printf("Character frequencies:\n");           // Display count the frequency of each char... result
    for (int i = 0; i < 256; i++) {               // Iterate through loop
        if (freq[i] > 0) {                        // Check condition
            printf("  '%c' : %d\n", i, freq[i]);  // Display count the frequency of each char... result
        }
    }
    return 0;                                     // Exit program successfully
}
