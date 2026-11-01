#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("cpp_output.txt");
    if (!outFile) {                                                 // Check condition
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }

    outFile << "Hello from C++ File Stream!" << endl;
    outFile << "Practicing file input and output in C++." << endl;
    outFile.close();

    cout << "Data written successfully to cpp_output.txt" << endl;  // Display write data into a file result
    return 0;                                                       // Exit program successfully
}
