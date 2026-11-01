#include <iostream>

int main() {
    int age;                                          // Declare variable
    char grade;                                       // Declare variable
    std::cout << "Enter age and grade: ";             // Prompt user to enter age and grade
    std::cin >> age >> grade;                         // Read input from standard input
    std::cout << "Age entered: " << age << "\n";      // Display age entered
    std::cout << "Grade entered: " << grade << "\n";  // Display grade entered
    return 0;                                         // Exit program successfully
}
