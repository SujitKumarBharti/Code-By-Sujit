#include <iostream>
using namespace std;

int main() {
    double radius;                                   // Declare variables for calculation
    const double PI = 3.141592653589793;             // Perform calculation
    cout << "Enter radius: ";                        // Prompt user for input
    if (cin >> radius) {                             // Read input from user
        double area = PI * radius * radius;          // Initialize variable
        cout << "Area of Circle: " << area << endl;  // Display calculate the area of a circle result
    }
    return 0;                                        // Exit program successfully
}
