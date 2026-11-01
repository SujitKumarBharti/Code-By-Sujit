#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("cpp_output.txt", ios::app);
    if (!outFile) {                                                  // Check condition
        cerr << "Error opening file for appending!" << endl;
        return 1;
    }

    outFile << "Appended line from C++ file handler." << endl;
    outFile.close();

    cout << "Data appended successfully to cpp_output.txt" << endl;  // Display append data to a file result
    return 0;                                                        // Exit program successfully
}
