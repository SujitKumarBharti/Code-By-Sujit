#include <iostream>
using namespace std;

int main() {
    double marks;                                                      // Declare variables for calculation
    cout << "Enter marks out of 100: ";                                // Prompt user for input
    if (cin >> marks) {                                                // Read input from user
        if (marks >= 90 && marks <= 100) cout << "Grade: A+" << endl;  // Display calculate student grades based o... result
        else if (marks >= 80) cout << "Grade: A" << endl;              // Display calculate student grades based o... result
        else if (marks >= 70) cout << "Grade: B" << endl;              // Display calculate student grades based o... result
        else if (marks >= 60) cout << "Grade: C" << endl;              // Display calculate student grades based o... result
        else if (marks >= 50) cout << "Grade: D" << endl;              // Display calculate student grades based o... result
        else if (marks >= 0) cout << "Grade: F (Fail)" << endl;        // Display calculate student grades based o... result
        else cout << "Invalid marks entered." << endl;                 // Display error message for invalid input
    }
    return 0;                                                          // Exit program successfully
}
