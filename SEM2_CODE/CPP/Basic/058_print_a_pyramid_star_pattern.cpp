#include <iostream>
using namespace std;

int main() {
    int rows = 5;                                          // Initialize variable
    for (int i = 1; i <= rows; i++) {                      // Iterate through loop
        for (int j = 1; j <= rows - i; j++) cout << " ";   // Display print a pyramid star pattern result
        for (int k = 1; k <= 2 * i - 1; k++) cout << "*";  // Display print a pyramid star pattern result
        cout << endl;                                      // Display print a pyramid star pattern result
    }
    return 0;                                              // Exit program successfully
}
