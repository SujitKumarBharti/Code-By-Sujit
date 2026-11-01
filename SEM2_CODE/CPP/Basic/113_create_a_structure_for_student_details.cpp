#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;                                 // Declare variables for calculation
    string name;
    float marks;                                // Declare variables for calculation
};

int main() {
    Student s;
    s.rollNo = 201;                             // Perform calculation
    s.name = "Sujit Kumar";                     // Perform calculation
    s.marks = 94.5f;                            // Perform calculation

    cout << "--- Student Details ---" << endl;  // Display create a structure for student d... result
    cout << "Roll No: " << s.rollNo << endl;    // Display create a structure for student d... result
    cout << "Name   : " << s.name << endl;      // Display create a structure for student d... result
    cout << "Marks  : " << s.marks << endl;     // Display create a structure for student d... result
    return 0;                                   // Exit program successfully
}
