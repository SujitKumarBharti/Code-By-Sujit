#include <iostream>

void checkEven(int num) {
    if (num % 2 != 0) {                         // Check condition
        throw "Number is not even";
    }
    std::cout << num << " is even\n";           // Display is even\n
}

int main() {
    try {
        checkEven(7);
    } catch (const char *err) {
        std::cout << "Error: " << err << "\n";  // Display error message
    }
    return 0;                                   // Exit program successfully
}
