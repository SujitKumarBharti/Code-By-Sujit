#include <iostream>

int main() {
    const char *str = "Hello C++";           // Initialize variable
    const char *p = str;                     // Initialize variable
    while (*p != '\0') {                     // Iterate while condition holds
        std::cout << *p;                     // Display output result
        p++;                                 // Increment counter
    }
    std::cout << "\n";                       // Display output result
    return 0;                                // Exit program successfully
}
