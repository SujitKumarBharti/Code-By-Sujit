#include <iostream>
#include <string>

class Staff {
private:
    std::string name;                                 // Declare variable
public:
    void readStaff() {
        std::cout << "Enter Staff Name: ";            // Prompt user to enter Staff Name
        std::cin >> name;                             // Read input from standard input
    }
    void showStaff() const {
        std::cout << "Staff: " << name << "\n";       // Display staff
    }
};

class Teacher : public Staff {
private:
    std::string subject;                              // Declare variable
public:
    void readTeacher() {
        readStaff();
        std::cout << "Enter Subject: ";               // Prompt user to enter Subject
        std::cin >> subject;                          // Read input from standard input
    }
    void showTeacher() const {
        showStaff();
        std::cout << "Subject: " << subject << "\n";  // Display subject
    }
};

class Officer : public Staff {
private:
    std::string grade;                                // Declare variable
public:
    void readOfficer() {
        readStaff();
        std::cout << "Enter Grade: ";                 // Prompt user to enter Grade
        std::cin >> grade;                            // Read input from standard input
    }
    void showOfficer() const {
        showStaff();
        std::cout << "Grade: " << grade << "\n";      // Display grade
    }
};

int main() {
    Teacher t;                                        // Instantiate object
    Officer o;                                        // Instantiate object
    std::cout << "Input for Teacher:\n";              // Display input for teacher
    t.readTeacher();
    std::cout << "Input for Officer:\n";              // Display input for officer
    o.readOfficer();
    t.showTeacher();
    o.showOfficer();
    return 0;                                         // Exit program successfully
}
