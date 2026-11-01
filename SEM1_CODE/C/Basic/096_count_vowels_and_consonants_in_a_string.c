#include <stdio.h>
#include <ctype.h>

int main(void) {
    char str[] = "Education and Learning";                                 // Initialize variable
    int vowels = 0, consonants = 0;                                        // Initialize variable

    for (int i = 0; str[i] != '\0'; i++) {                                 // Iterate through loop
        char c = tolower(str[i]);                                          // Initialize variable
        if (c >= 'a' && c <= 'z') {                                        // Check condition
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')  // Check condition
                vowels++;
            else
                consonants++;
        }
    }

    printf("String: \"%s\"\n", str);                                       // Display count vowels and consonants in a... result
    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);            // Display count vowels and consonants in a... result
    return 0;                                                              // Exit program successfully
}
