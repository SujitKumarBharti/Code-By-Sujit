#include <iostream>
#include <stdexcept>

void divide(int a, int b) {
    if (b == 0) {                                     // Check if value equals zero
        throw std::runtime_error("Division by zero error");
    }
    std::cout << "Result: " << (a / b) << "\n";       // Display result
}

int main() {
    try {
        divide(10, 0);
    } catch (const std::exception &e) {
        std::cout << "Caught: " << e.what() << "\n";  // Display caught
    }
    return 0;                                         // Exit program successfully
}
