#include <iostream>
#include <string>

class Student {
private:
    int Student_Roll;                                                                 // Declare variable
    std::string Student_Name;                                                         // Declare variable
public:
    Student() {
        Student_Roll = 0;                                                             // Calculate and assign value
        Student_Name = "Unknown";                                                     // Calculate and assign value
    }
    Student(int r) {
        Student_Roll = r;                                                             // Calculate and assign value
        Student_Name = "Pending";                                                     // Calculate and assign value
    }
    Student(int r, std::string n) {
        Student_Roll = r;                                                             // Calculate and assign value
        Student_Name = n;                                                             // Calculate and assign value
    }
    void write() {
        std::cout << "Roll: " << Student_Roll << ", Name: " << Student_Name << "\n";  // Display roll
    }
};

int main() {
    Student s1;                                                                       // Instantiate object
    Student s2(102);                                                                  // Instantiate object
    Student s3(103, "Priya");                                                         // Instantiate object
    s1.write();
    s2.write();
    s3.write();
    return 0;                                                                         // Exit program successfully
}
