#include <iostream>

class Sample {
private:
    int x;                                               // Declare variable
public:
    void setX(int x) {
        this->x = x;                                     // Calculate and assign value
    }
    void show() const {
        std::cout << "Value of x: " << this->x << "\n";  // Display value of x
    }
};

int main() {
    Sample s;                                            // Instantiate object
    s.setX(99);
    s.show();                                            // Call member function show()
    return 0;                                            // Exit program successfully
}
