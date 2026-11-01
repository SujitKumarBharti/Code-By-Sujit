#include <iostream>
using namespace std;

int main() {
    int size = 5;                                                          // Initialize variable
    for (int i = 1; i <= size; i++) {                                      // Iterate through loop
        for (int j = 1; j <= size; j++) {                                  // Iterate through loop
            if (i == 1 || i == size || j == 1 || j == size) cout << "* ";  // Display print a hollow square pattern result
            else cout << "  ";                                             // Display print a hollow square pattern result
        }
        cout << endl;                                                      // Display print a hollow square pattern result
    }
    return 0;                                                              // Exit program successfully
}
