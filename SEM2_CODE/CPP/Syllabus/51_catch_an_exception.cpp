#include <iostream>

int main() {
    int age = 15;                                          // Initialize variable
    try {
        if (age < 18) {                                    // Evaluate comparison condition
            throw "Access denied: Below 18";
        }
        std::cout << "Access granted\n";                   // Display access granted\n
    } catch (const char *msg) {
        std::cout << "Exception caught: " << msg << "\n";  // Display exception caught
    }
    return 0;                                              // Exit program successfully
}
