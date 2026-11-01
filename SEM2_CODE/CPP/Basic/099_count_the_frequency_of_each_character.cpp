#include <iostream>
#include <map>
using namespace std;

int main() {
    string str = "programming";                          // Perform calculation
    map<char, int> freq;

    for (char c : str) freq[c]++;                        // Iterate through loop

    cout << "String: \"" << str << "\"" << endl;         // Display count the frequency of each char... result
    cout << "Character frequencies:" << endl;            // Display count the frequency of each char... result
    for (auto const &[ch, count] : freq) {               // Iterate through loop
        cout << "  '" << ch << "' : " << count << endl;  // Display count the frequency of each char... result
    }
    return 0;                                            // Exit program successfully
}
