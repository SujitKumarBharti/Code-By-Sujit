#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    ifstream file("cpp_output.txt");
    if (!file) {                                            // Check condition
        cerr << "File cpp_output.txt not found. Run write program first." << endl;
        return 1;
    }

    int characters = 0, words = 0, lines = 0;               // Initialize variable
    string line;

    while (getline(file, line)) {                           // Iterate through loop
        lines++;
        characters += line.length() + 1;                    // including newline
        stringstream ss(line);
        string word;
        while (ss >> word) {                                // Iterate through loop
            words++;
        }
    }
    file.close();

    cout << "File Statistics for cpp_output.txt:" << endl;  // Display count characters, words, and lin... result
    cout << "Characters : " << characters << endl;          // Display count characters, words, and lin... result
    cout << "Words      : " << words << endl;               // Display count characters, words, and lin... result
    cout << "Lines      : " << lines << endl;               // Display count characters, words, and lin... result
    return 0;                                               // Exit program successfully
}
