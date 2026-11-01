#include <iostream>
#include <string>

class Student {
private:
    int Student_Roll;                                                                 // Declare variable
    std::string Student_Name;                                                         // Declare variable
public:
    Student(int r, std::string n) {
        Student_Roll = r;                                                             // Calculate and assign value
        Student_Name = n;                                                             // Calculate and assign value
    }
    void write() {
        std::cout << "Roll: " << Student_Roll << ", Name: " << Student_Name << "\n";  // Display roll
    }
};

int main() {
    Student s(105, "Amit");                                                           // Instantiate object
    std::cout << "Parameterized constructor values:\n";                               // Display output result
    s.write();
    return 0;                                                                         // Exit program successfully
}
