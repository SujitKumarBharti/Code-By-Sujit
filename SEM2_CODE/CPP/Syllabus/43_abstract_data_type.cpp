#include <iostream>

class Shape {
public:
    virtual double area() = 0;                             // Calculate and assign value
    virtual ~Shape() {}
};

class Rectangle : public Shape {
private:
    double width, height;                                  // Declare variable
public:
    Rectangle(double w, double h) {
        width = w;                                         // Calculate and assign value
        height = h;                                        // Calculate and assign value
    }
    double area() override {
        return width * height;                             // Return computed result width * height
    }
};

int main() {
    Shape *s = new Rectangle(5.0, 4.0);                    // Instantiate new object
    std::cout << "Rectangle area: " << s->area() << "\n";  // Display rectangle area
    delete s;
    return 0;                                              // Exit program successfully
}
