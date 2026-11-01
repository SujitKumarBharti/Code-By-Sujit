#include <iostream>

void modify(int *ptr) {
    *ptr = *ptr * 2;                               // Calculate and assign value
}

int main() {
    int val = 25;                                  // Initialize variable
    std::cout << "Original: " << val << "\n";      // Display original
    modify(&val);
    std::cout << "After modify: " << val << "\n";  // Display after modify
    return 0;                                      // Exit program successfully
}
