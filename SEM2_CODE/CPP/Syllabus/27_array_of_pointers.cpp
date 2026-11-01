#include <iostream>

int main() {
    int a = 10, b = 20, c = 30;                                    // Initialize variable
    int *ptrs[3] = {&a, &b, &c};                                   // Initialize variable
    for (int i = 0; i < 3; i++) {                                  // Loop through elements
        std::cout << "Element " << i << ": " << *ptrs[i] << "\n";  // Display element
    }
    return 0;                                                      // Exit program successfully
}
