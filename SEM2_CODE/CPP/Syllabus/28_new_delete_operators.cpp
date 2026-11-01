#include <iostream>

int main() {
    int *pInt = new int(42);                                                                // Instantiate new object
    std::cout << "Dynamically allocated integer: " << *pInt << "\n";                        // Display dynamically allocated integer
    delete pInt;

    int *arr = new int[3]{10, 20, 30};                                                      // Instantiate new object
    std::cout << "Array elements: " << arr[0] << ", " << arr[1] << ", " << arr[2] << "\n";  // Display array elements
    delete[] arr;
    return 0;                                                                               // Exit program successfully
}
