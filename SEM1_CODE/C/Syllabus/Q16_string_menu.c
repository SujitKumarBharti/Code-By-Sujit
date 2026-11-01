#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define TEXT_SIZE 200

static void read_line(const char *prompt, char text[], size_t size) {
    printf("%s", prompt);                                                                     // Display , prompt);
    if (fgets(text, (int)size, stdin) == NULL) {                                              // Check pointer validity
        text[0] = '\0';                                                                       // Calculate and assign value
        return;                                                                               // Return from function
    }
    text[strcspn(text, "\n")] = '\0';                                                         // Calculate and assign value
}

int main(void) {
    char first[TEXT_SIZE];                                                                    // Declare variable
    char second[TEXT_SIZE];                                                                   // Declare variable
    char result[TEXT_SIZE * 2];                                                               // Declare variable
    int choice;                                                                               // Declare variable

    read_line("Enter first string: ", first, sizeof(first));
    read_line("Enter second string: ", second, sizeof(second));
    do {
        printf("\n1 Addresses  2 Join manually  3 Join with strcat\n"                         // Display output result
               "4 Compare  5 Length  6 Uppercase  7 Lowercase\n"
               "8 Count vowels  9 Reverse first string  0 Exit\nChoice: ");
        if (scanf("%d", &choice) != 1) return 1;                                              // Read user input values
        getchar();

        if (choice == 1) {                                                                    // Check condition
            for (size_t index = 0; first[index] != '\0'; index++)                             // Loop through elements
                printf("%c: %p\n", first[index], (void *)&first[index]);                      // Display output result
        } else if (choice == 2 || choice == 3) {                                              // Check condition
            if (choice == 2) {                                                                // Check condition
                size_t index = 0;                                                             // Calculate and assign value
                while (first[index] != '\0') result[index] = first[index], index++;           // Iterate while condition holds
                for (size_t other = 0; second[other] != '\0'; other++)                        // Loop through elements
                    result[index++] = second[other];                                          // Calculate and assign value
                result[index] = '\0';                                                         // Calculate and assign value
            } else {
                snprintf(result, sizeof(result), "%s", first);                                // Display , first);
                strncat(result, second, sizeof(result) - strlen(result) - 1);
            }
            printf("Concatenated string: %s\n", result);                                      // Display concatenated string
        } else if (choice == 4) {                                                             // Check condition
            printf("Strings are %s.\n", strcmp(first, second) == 0 ? "equal" : "different");  // Display strings are
        } else if (choice == 5) {                                                             // Check condition
            size_t length = 0;                                                                // Calculate and assign value
            for (const char *character = first; *character != '\0'; character++) length++;    // Loop through elements
            printf("Length: %zu\n", length);                                                  // Display length
        } else if (choice == 6 || choice == 7) {                                              // Check condition
            for (char *character = first; *character != '\0'; character++)                    // Loop through elements
                *character = (char)(choice == 6
                    ? toupper((unsigned char)*character)
                    : tolower((unsigned char)*character));
            printf("Updated first string: %s\n", first);                                      // Display updated first string
        } else if (choice == 8) {                                                             // Check condition
            int vowels = 0;                                                                   // Initialize variable
            for (const char *character = first; *character != '\0'; character++) {            // Loop through elements
                int letter = tolower((unsigned char)*character);                              // Initialize variable
                if (letter == 'a' || letter == 'e' || letter == 'i' ||                        // Check condition
                    letter == 'o' || letter == 'u') vowels++;                                 // Increment counter
            }
            printf("Vowels: %d\n", vowels);                                                   // Display vowels
        } else if (choice == 9) {                                                             // Check condition
            size_t left = 0;                                                                  // Calculate and assign value
            size_t right = strlen(first);                                                     // Calculate and assign value
            while (left < right && left < --right) {                                          // Iterate while condition holds
                char temporary = first[left];                                                 // Initialize variable
                first[left++] = first[right];                                                 // Calculate and assign value
                first[right] = temporary;                                                     // Swap value using temporary variable
            }
            printf("Reversed first string: %s\n", first);                                     // Display reversed first string
        } else if (choice != 0) {                                                             // Check condition
            printf("Invalid choice.\n");                                                      // Display error message
        }
    } while (choice != 0);
    return 0;                                                                                 // Exit program successfully
}
