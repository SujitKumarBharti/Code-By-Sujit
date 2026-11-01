#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str = "Object Oriented Programming";                                      // Perform calculation
    int vowels = 0, consonants = 0;                                                  // Initialize variable

    for (char ch : str) {                                                            // Iterate through loop
        char c = tolower(ch);                                                        // Initialize variable
        if (c >= 'a' && c <= 'z') {                                                  // Check condition
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') vowels++;  // Check condition
            else consonants++;
        }
    }

    cout << "String: \"" << str << "\"" << endl;                                     // Display count vowels and consonants in a... result
    cout << "Vowels: " << vowels << ", Consonants: " << consonants << endl;          // Display count vowels and consonants in a... result
    return 0;                                                                        // Exit program successfully
}
