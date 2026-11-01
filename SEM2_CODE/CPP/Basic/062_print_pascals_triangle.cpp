#include <iostream>
using namespace std;

int main() {
    int rows = 5;                                         // Initialize variable
    for (int i = 0; i < rows; i++) {                      // Iterate through loop
        int val = 1;                                      // Initialize variable
        for (int s = 1; s <= rows - i; s++) cout << " ";  // Display print Pascal's triangle result
        for (int j = 0; j <= i; j++) {                    // Iterate through loop
            cout << val << " ";                           // Display print Pascal's triangle result
            val = val * (i - j) / (j + 1);                // Perform calculation
        }
        cout << endl;                                     // Display print Pascal's triangle result
    }
    return 0;                                             // Exit program successfully
}
