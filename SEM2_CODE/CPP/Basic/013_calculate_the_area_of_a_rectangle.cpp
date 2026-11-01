#include <iostream>
using namespace std;

int main() {
    double length, width;                                           // Declare variables for calculation
    cout << "Enter length and width: ";                             // Prompt user for input
    if (cin >> length >> width) {                                   // Read input from user
        cout << "Area of Rectangle: " << (length * width) << endl;  // Display calculate the area of a rectangle result
    }
    return 0;                                                       // Exit program successfully
}
