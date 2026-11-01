#include <iostream>
#include <string>

class Student {
private:
    int Student_Roll;                                                                 // Declare variable
    std::string Student_Name;                                                         // Declare variable
public:
    void read() {
        std::cout << "Enter Roll and Name: ";                                         // Prompt user to enter Roll and Name
        std::cin >> Student_Roll >> Student_Name;                                     // Read input from standard input
    }
    void write() {
        std::cout << "Roll: " << Student_Roll << ", Name: " << Student_Name << "\n";  // Display roll
    }
};

Student global_student;                                                               // Instantiate object

int main() {
    std::cout << "Global object operations:\n";                                       // Display global object operations
    global_student.read();                                                            // Call member function read()
    global_student.write();

    Student local_student;                                                            // Instantiate object
    std::cout << "Local object operations:\n";                                        // Display local object operations
    local_student.read();                                                             // Call member function read()
    local_student.write();
    return 0;                                                                         // Exit program successfully
}
