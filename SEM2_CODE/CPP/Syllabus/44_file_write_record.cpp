#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream fout("studentinfo.txt");
    if (!fout) {                                         // Check condition
        std::cout << "Error opening file\n";             // Display error message
        return 1;                                        // Exit with error status code
    }
    std::string name = "Aman";                           // Initialize variable
    int age = 20;                                        // Initialize variable
    fout << name << " " << age << "\n";
    fout.close();
    std::cout << "Record written to studentinfo.txt\n";  // Display output result
    return 0;                                            // Exit program successfully
}
