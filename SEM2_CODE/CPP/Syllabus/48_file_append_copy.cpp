#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream fin("studentin.txt");
    std::ofstream fout("studentout.txt", std::ios::app);
    if (!fin) {                                              // Check condition
        std::cout << "Source file studentin.txt missing\n";  // Display output result
        return 1;                                            // Exit with error status code
    }
    std::string line;                                        // Declare variable
    while (std::getline(fin, line)) {                        // Read complete line of text
        fout << line << "\n";
    }
    fin.close();
    fout.close();
    std::cout << "Appended content successfully\n";          // Display output result
    return 0;                                                // Exit program successfully
}
