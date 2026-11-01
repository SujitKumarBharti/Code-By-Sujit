#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student {
    int rollNo;                                                                                  // Declare variables for calculation
    string name;
    float marks;                                                                                 // Declare variables for calculation
};

int main() {
    vector<Student> students = {                                                                 // Perform calculation
        {101, "Aman", 89.0f},
        {102, "Priya", 93.5f},
        {103, "Rohit", 82.0f}
    };

    cout << "--- Student Records ---" << endl;                                                   // Display store and display details of mul... result
    for (const auto &s : students) {                                                             // Iterate through loop
        cout << "Roll: " << s.rollNo << ", Name: " << s.name << ", Marks: " << s.marks << endl;  // Display store and display details of mul... result
    }
    return 0;                                                                                    // Exit program successfully
}
