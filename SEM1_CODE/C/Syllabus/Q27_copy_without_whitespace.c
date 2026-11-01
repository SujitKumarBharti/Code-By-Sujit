#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    struct stat source_info;                                                               // Declare variable
    struct stat destination_info;                                                          // Declare variable

    if (argc != 3) {                                                                       // Check condition
        printf("Usage: %s source.txt destination.txt\n", argv[0]);                         // Display usage
        return 1;                                                                          // Exit with error status code
    }
    if (strcmp(argv[1], argv[2]) == 0) {                                                   // Check if value equals zero
        printf("Source and destination must be different files.\n");                       // Display output result
        return 1;                                                                          // Exit with error status code
    }
    if (stat(argv[1], &source_info) == 0 && stat(argv[2], &destination_info) == 0 &&       // Check if value equals zero
        source_info.st_dev == destination_info.st_dev &&
        source_info.st_ino == destination_info.st_ino) {
        printf("Source and destination refer to the same file.\n");                        // Display output result
        return 1;                                                                          // Exit with error status code
    }

    FILE *source = fopen(argv[1], "r");                                                    // Calculate and assign value
    if (source == NULL) {                                                                  // Check pointer validity
        perror(argv[1]);
        return 1;                                                                          // Exit with error status code
    }
    FILE *destination = fopen(argv[2], "w");                                               // Calculate and assign value
    if (destination == NULL) {                                                             // Check pointer validity
        perror(argv[2]);
        fclose(source);
        return 1;                                                                          // Exit with error status code
    }

    int character;                                                                         // Declare variable
    int failed = 0;                                                                        // Initialize variable
    while ((character = fgetc(source)) != EOF) {                                           // Iterate while condition holds
        if (!isspace((unsigned char)character) && fputc(character, destination) == EOF) {  // Check condition
            failed = 1;                                                                    // Calculate and assign value
            break;                                                                         // Exit loop or switch block
        }
    }
    if (ferror(source)) failed = 1;                                                        // Check condition
    if (fclose(source) != 0) failed = 1;                                                   // Check condition
    if (fclose(destination) != 0) failed = 1;                                              // Check condition
    if (failed) return 1;                                                                  // Check condition
    printf("Copied text without whitespace to %s.\n", argv[2]);                            // Display output result
    return 0;                                                                              // Exit program successfully
}
