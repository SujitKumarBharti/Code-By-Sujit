#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream fin("studentinfo.txt");
    if (!fin) {                                                     // Check condition
        std::cout << "File studentinfo.txt not found\n";            // Display output result
        return 1;                                                   // Exit with error status code
    }
    std::string name;                                               // Declare variable
    int age;                                                        // Declare variable
    while (fin >> name >> age) {                                    // Iterate while condition holds
        std::cout << "Name: " << name << ", Age: " << age << "\n";  // Display name
    }
    fin.close();
    return 0;                                                       // Exit program successfully
}
