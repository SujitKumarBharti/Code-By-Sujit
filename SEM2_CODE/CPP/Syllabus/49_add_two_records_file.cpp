#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream fout("studentinfo.txt", std::ios::app);
    if (!fout) {                                            // Check condition
        std::cout << "Error opening file\n";                // Display error message
        return 1;                                           // Exit with error status code
    }
    fout << "Kunal 22\n";
    fout << "Deepa 19\n";
    fout.close();
    std::cout << "Added two records to studentinfo.txt\n";  // Display output result
    return 0;                                               // Exit program successfully
}
