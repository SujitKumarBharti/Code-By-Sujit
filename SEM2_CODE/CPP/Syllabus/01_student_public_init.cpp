#include <iostream>
#include <string>

class Student {
public:
    int Student_Roll;                                                                     // Declare variable
    std::string Student_Name;                                                             // Declare variable
};

int main() {
    Student s1;                                                                           // Instantiate object
    s1.Student_Roll = 101;                                                                // Calculate and assign value
    s1.Student_Name = "Rahul";                                                            // Calculate and assign value
    std::cout << "Compile Time: " << s1.Student_Roll << ", " << s1.Student_Name << "\n";  // Display compile time

    Student s2;                                                                           // Instantiate object
    std::cout << "Enter Roll: ";                                                          // Prompt user to enter Roll
    std::cin >> s2.Student_Roll;                                                          // Read input from standard input
    std::cout << "Enter Name: ";                                                          // Prompt user to enter Name
    std::cin >> s2.Student_Name;                                                          // Read input from standard input
    std::cout << "Run Time: " << s2.Student_Roll << ", " << s2.Student_Name << "\n";      // Display run time
    return 0;                                                                             // Exit program successfully
}
