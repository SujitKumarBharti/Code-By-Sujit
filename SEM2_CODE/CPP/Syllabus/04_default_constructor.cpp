#include <iostream>
#include <string>

class Student {
private:
    int Student_Roll;                                                                 // Declare variable
    std::string Student_Name;                                                         // Declare variable
public:
    Student() {
        Student_Roll = 0;                                                             // Calculate and assign value
        Student_Name = "Not Assigned";                                                // Calculate and assign value
    }
    void write() {
        std::cout << "Roll: " << Student_Roll << ", Name: " << Student_Name << "\n";  // Display roll
    }
};

int main() {
    Student s;                                                                        // Instantiate object
    std::cout << "Default constructor values:\n";                                     // Display default constructor values
    s.write();
    return 0;                                                                         // Exit program successfully
}
