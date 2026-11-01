#include <iostream>

int main() {
    std::cout.width(8);
    std::cout.fill('#');
    std::cout << 99 << "\n";                 // Display output result
    std::cout.precision(4);
    std::cout << 12.34567 << "\n";           // Display output result
    return 0;                                // Exit program successfully
}
