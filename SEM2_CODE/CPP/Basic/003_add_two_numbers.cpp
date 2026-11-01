#include <iostream>
using namespace std;

int main() {
    int a, b;                                // Declare variables for calculation
    cout << "Enter two numbers: ";           // Prompt user for input
    if (cin >> a >> b) {                     // Read input from user
        cout << "Sum: " << (a + b) << endl;  // Display add two numbers result
    }
    return 0;                                // Exit program successfully
}
