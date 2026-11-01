#include <iostream>

int main() {
    int var = 500;                                                  // Initialize variable
    int *ptr = &var;                                                // Initialize variable
    int **dptr = &ptr;                                              // Initialize variable
    std::cout << "Value of var: " << var << "\n";                   // Display value of var
    std::cout << "Value using single pointer: " << *ptr << "\n";    // Display value using single pointer
    std::cout << "Value using double pointer: " << **dptr << "\n";  // Display value using double pointer
    return 0;                                                       // Exit program successfully
}
