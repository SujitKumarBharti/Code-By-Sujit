#include <iostream>
using namespace std;

int main() {
    int rows = 5;                                       // Initialize variable
    for (int i = 1; i <= rows; i++) {                   // Iterate through loop
        for (int j = 1; j <= i; j++) cout << j << " ";  // Display print a number triangle pattern result
        cout << endl;                                   // Display print a number triangle pattern result
    }
    return 0;                                           // Exit program successfully
}
