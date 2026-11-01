#include <iostream>
using namespace std;

int main() {
    int rows = 5;                                          // Initialize variable
    for (int i = 1; i <= rows; i++) {                      // Iterate through loop
        char ch = 'A';                                     // Initialize variable
        for (int j = 1; j <= i; j++) cout << ch++ << " ";  // Display print an alphabet triangle pattern result
        cout << endl;                                      // Display print an alphabet triangle pattern result
    }
    return 0;                                              // Exit program successfully
}
