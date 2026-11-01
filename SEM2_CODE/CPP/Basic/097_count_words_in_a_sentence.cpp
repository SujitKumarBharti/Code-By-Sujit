#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string sentence = "C++ standard template library is versatile";  // Perform calculation
    stringstream ss(sentence);
    string word;
    int count = 0;                                                   // Initialize variable

    while (ss >> word) {                                             // Iterate through loop
        count++;
    }

    cout << "Sentence: \"" << sentence << "\"" << endl;              // Display count words in a sentence result
    cout << "Word count: " << count << endl;                         // Display count words in a sentence result
    return 0;                                                        // Exit program successfully
}
