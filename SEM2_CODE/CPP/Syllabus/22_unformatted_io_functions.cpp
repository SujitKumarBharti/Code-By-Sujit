#include <iostream>

int main() {
    char ch;                                 // Declare variable
    std::cout << "Enter a character: ";      // Prompt user to enter a character
    std::cin.get(ch);
    std::cout << "Character using put(): ";  // Display character using put()
    std::cout.put(ch);
    std::cout << "\n";                       // Display output result

    char line[100];                          // Declare variable
    std::cin.ignore();                       // Clear trailing newline from buffer
    std::cout << "Enter a line of text: ";   // Prompt user to enter a line of text
    std::cin.getline(line, 100);             // Read complete line of text
    std::cout << "Line using write(): ";     // Display line using write()
    std::cout.write(line, 10);
    std::cout << "\n";                       // Display output result
    return 0;                                // Exit program successfully
}
