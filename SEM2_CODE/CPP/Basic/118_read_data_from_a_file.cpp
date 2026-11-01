#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inFile("cpp_output.txt");
    if (!inFile) {                                   // Check condition
        ofstream sample("cpp_output.txt");
        sample << "Sample content for C++ read file demonstration." << endl;
        sample.close();
        inFile.open("cpp_output.txt");
    }

    cout << "Reading from cpp_output.txt:" << endl;  // Display read data from a file result
    string line;
    while (getline(inFile, line)) {                  // Iterate through loop
        cout << line << endl;                        // Display read data from a file result
    }
    inFile.close();
    return 0;                                        // Exit program successfully
}
