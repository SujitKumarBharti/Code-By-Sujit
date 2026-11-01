#include <iostream>

int main() {
    int arr[5] = {2, 4, 6, 8, 10};                                // Initialize variable
    int (*ptr)[5] = &arr;                                         // Initialize variable
    for (int i = 0; i < 5; i++) {                                 // Loop through elements
        std::cout << "arr[" << i << "] = " << (*ptr)[i] << "\n";  // Display arr[
    }
    return 0;                                                     // Exit program successfully
}
