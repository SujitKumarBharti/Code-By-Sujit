#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words = {"Banana", "Apple", "Mango", "Cherry", "Date"};  // Perform calculation
    cout << "Original strings:" << endl;                                    // Display sort strings alphabetically result
    for (const string &w : words) cout << "  " << w << endl;                // Display sort strings alphabetically result

    sort(words.begin(), words.end());

    cout << "Sorted alphabetically:" << endl;                               // Display sort strings alphabetically result
    for (const string &w : words) cout << "  " << w << endl;                // Display sort strings alphabetically result
    return 0;                                                               // Exit program successfully
}
