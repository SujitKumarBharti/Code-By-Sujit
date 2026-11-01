#include <iostream>
using namespace std;

int main() {
    double s1, s2, s3;                                                    // Declare variables for calculation
    cout << "Enter three sides of the triangle: ";                        // Prompt user for input
    if (cin >> s1 >> s2 >> s3) {                                          // Read input from user
        if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {               // Check condition
            if (s1 == s2 && s2 == s3)                                     // Check condition
                cout << "Equilateral Triangle" << endl;                   // Display identify equilateral, isosceles,... result
            else if (s1 == s2 || s2 == s3 || s1 == s3)
                cout << "Isosceles Triangle" << endl;                     // Display identify equilateral, isosceles,... result
            else
                cout << "Scalene Triangle" << endl;                       // Display identify equilateral, isosceles,... result
        } else {
            cout << "Given sides do not form a valid triangle." << endl;  // Display identify equilateral, isosceles,... result
        }
    }
    return 0;                                                             // Exit program successfully
}
