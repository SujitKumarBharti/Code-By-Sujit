#include <iostream>
#include <string>

class Person {
private:
    std::string name;                           // Declare variable
protected:
    void setName(const std::string &n) {
        name = n;                               // Calculate and assign value
    }
    std::string getName() const {
        return name;                            // Return computed result name
    }
public:
    void readPerson() {
        std::cout << "Enter Name: ";            // Prompt user to enter Name
        std::cin >> name;                       // Read input from standard input
    }
    void showPerson() const {
        std::cout << "Name: " << name << "\n";  // Display name
    }
};

class Student : public Person {
private:
    int roll;                                   // Declare variable
protected:
    void setRoll(int r) {
        roll = r;                               // Calculate and assign value
    }
public:
    void readStudent() {
        readPerson();
        std::cout << "Enter Roll: ";            // Prompt user to enter Roll
        std::cin >> roll;                       // Read input from standard input
    }
    void showStudent() const {
        showPerson();
        std::cout << "Roll: " << roll << "\n";  // Display roll
    }
};

int main() {
    Student s;                                  // Instantiate object
    s.readStudent();
    s.showStudent();
    return 0;                                   // Exit program successfully
}
