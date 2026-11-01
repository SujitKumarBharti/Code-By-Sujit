#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream fout("studentinfo.txt", std::ios::app);
    if (!fout) {                                          // Check condition
        std::cout << "Error opening file\n";              // Display error message
        return 1;                                         // Exit with error status code
    }
    std::string name = "Simran";                          // Initialize variable
    int age = 21;                                         // Initialize variable
    fout << name << " " << age << "\n";
    fout.close();
    std::cout << "Record appended to studentinfo.txt\n";  // Display output result
    return 0;                                             // Exit program successfully
}
