#include <iostream>

class Box {
private:
    int width;                                            // Declare variable
public:
    Box(int w = 0) {
        width = w;                                        // Calculate and assign value
    }
    friend void printWidth(const Box &b);
};

void printWidth(const Box &b) {
    std::cout << "Width of box is: " << b.width << "\n";  // Display width of box is
}

int main() {
    Box box(15);                                          // Instantiate object
    printWidth(box);
    return 0;                                             // Exit program successfully
}
