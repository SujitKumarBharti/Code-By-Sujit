#include <iostream>

class Number {
private:
    int val;                                    // Declare variable
public:
    Number(int v = 0) {
        val = v;                                // Calculate and assign value
    }
    Number operator-() {
        return Number(-val);                    // Return computed result Number(-val)
    }
    void display() {
        std::cout << "Value: " << val << "\n";  // Display value
    }
};

int main() {
    Number n1(50);                              // Instantiate object
    Number n2 = -n1;                            // Calculate and assign value
    std::cout << "Original: ";                  // Display original
    n1.display();                               // Call member function display()
    std::cout << "Negated: ";                   // Display negated
    n2.display();                               // Call member function display()
    return 0;                                   // Exit program successfully
}
