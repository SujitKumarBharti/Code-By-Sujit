#include <iostream>

int main() {
    int val = 100;                                       // Initialize variable
    int *ptr = &val;                                     // Initialize variable
    std::cout << "Value of val: " << val << "\n";        // Display value of val
    std::cout << "Address of val: " << &val << "\n";     // Display address of val
    std::cout << "Pointer holds: " << ptr << "\n";       // Display pointer holds
    std::cout << "Value via pointer: " << *ptr << "\n";  // Display value via pointer
    return 0;                                            // Exit program successfully
}
