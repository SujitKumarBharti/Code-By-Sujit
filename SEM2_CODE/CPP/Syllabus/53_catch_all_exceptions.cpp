#include <iostream>

void compute(int val) {
    try {
        if (val < 0) {                                          // Check for negative value
            throw "Negative value not allowed";
        }
        std::cout << "Value processed: " << val << "\n";        // Display value processed
    } catch (...) {
        std::cout << "Default handler: Caught an exception\n";  // Display default handler
    }
}

int main() {
    compute(5);
    compute(-2);
    return 0;                                                   // Exit program successfully
}
