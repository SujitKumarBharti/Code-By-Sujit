#include <iostream>
using namespace std;

int main() {
    int rows = 5, num = 1;                                  // Initialize variable
    for (int i = 1; i <= rows; i++) {                       // Iterate through loop
        for (int j = 1; j <= i; j++) cout << num++ << " ";  // Display print Floyd's triangle result
        cout << endl;                                       // Display print Floyd's triangle result
    }
    return 0;                                               // Exit program successfully
}
