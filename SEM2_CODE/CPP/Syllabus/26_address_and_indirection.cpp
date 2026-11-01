#include <iostream>

int main() {
    int x = 50;                                             // Initialize variable
    int *p = &x;                                            // Initialize variable
    std::cout << "Address operator &: " << p << "\n";       // Display address operator &
    std::cout << "Indirection operator *: " << *p << "\n";  // Display indirection operator *
    *p = 75;                                                // Calculate and assign value
    std::cout << "Modified value: " << x << "\n";           // Display modified value
    return 0;                                               // Exit program successfully
}
