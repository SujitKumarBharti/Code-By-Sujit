#include <iostream>

void swapByRef(int &a, int &b) {
    int temp = a;                                                            // Initialize variable
    a = b;                                                                   // Calculate and assign value
    b = temp;                                                                // Swap value using temporary variable
}

int main() {
    int x = 10, y = 20;                                                      // Initialize variable
    std::cout << "Before: x=" << x << ", y=" << y << "\n";                   // Display before
    swapByRef(x, y);
    std::cout << "After call by reference: x=" << x << ", y=" << y << "\n";  // Display after call by reference
    return 0;                                                                // Exit program successfully
}
