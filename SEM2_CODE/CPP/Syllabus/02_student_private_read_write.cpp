#include <iostream>
#include <string>

class Student {
private:
    int Student_Roll;                                                                 // Declare variable
    std::string Student_Name;                                                         // Declare variable
public:
    void read() {
        std::cout << "Enter Roll: ";                                                  // Prompt user to enter Roll
        std::cin >> Student_Roll;                                                     // Read input from standard input
        std::cout << "Enter Name: ";                                                  // Prompt user to enter Name
        std::cin >> Student_Name;                                                     // Read input from standard input
    }
    void write() {
        std::cout << "Roll: " << Student_Roll << ", Name: " << Student_Name << "\n";  // Display roll
    }
};

int main() {
    Student s;                                                                        // Instantiate object
    s.read();                                                                         // Call member function read()
    s.write();
    return 0;                                                                         // Exit program successfully
}
