#include <iostream>
#include <iomanip>

int main() {
    int num = 42;                                                    // Initialize variable
    double pi = 3.14159265;                                          // Initialize variable
    std::cout << "setw and setfill:\n";                              // Display setw and setfill
    std::cout << std::setw(10) << std::setfill('*') << num << "\n";  // Display *
    std::cout << "setprecision:\n";                                  // Display setprecision
    std::cout << std::fixed << std::setprecision(2) << pi << "\n";   // Display output result
    return 0;                                                        // Exit program successfully
}
