#include <iostream>

class Number {
private:
    int value;                                    // Declare variable
public:
    Number(int v = 0) {
        value = v;                                // Calculate and assign value
    }
    void show() const {
        std::cout << "Value: " << value << "\n";  // Display value
    }
};

int main() {
    Number *arr[3];
    arr[0] = new Number(10);                      // Instantiate new object
    arr[1] = new Number(20);                      // Instantiate new object
    arr[2] = new Number(30);                      // Instantiate new object
    for (int i = 0; i < 3; i++) {                 // Loop through elements
        arr[i]->show();
        delete arr[i];
    }
    return 0;                                     // Exit program successfully
}
