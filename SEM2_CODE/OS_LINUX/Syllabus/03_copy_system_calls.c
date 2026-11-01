#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int src = open("source.txt", O_RDONLY);                           // Initialize variable
    if (src < 0) {                                                    // Check for negative value
        printf("Source file not found\n");                            // Display source file not found\n
        return 1;                                                     // Exit with error status code
    }
    int dest = open("dest.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);  // Initialize variable
    if (dest < 0) {                                                   // Check for negative value
        close(src);
        printf("Cannot create destination file\n");                   // Display output result
        return 1;                                                     // Exit with error status code
    }
    char buffer[1024];                                                // Declare variable
    ssize_t bytes;
    while ((bytes = read(src, buffer, sizeof(buffer))) > 0) {         // Iterate while condition holds
        write(dest, buffer, bytes);
    }
    close(src);
    close(dest);
    printf("File copied successfully using system calls\n");          // Display output result
    return 0;                                                         // Exit program successfully
}
