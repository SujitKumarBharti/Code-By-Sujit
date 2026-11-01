#include <iostream>
using namespace std;

int main() {
    double base, height;                                                // Declare variables for calculation
    cout << "Enter base and height: ";                                  // Prompt user for input
    if (cin >> base >> height) {                                        // Read input from user
        cout << "Area of Triangle: " << (0.5 * base * height) << endl;  // Display calculate the area of a triangle result
    }
    return 0;                                                           // Exit program successfully
}
