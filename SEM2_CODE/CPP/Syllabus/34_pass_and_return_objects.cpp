#include <iostream>

class Point {
public:
    int x, y;                                                    // Declare variable
    Point(int xVal = 0, int yVal = 0) {
        x = xVal;                                                // Calculate and assign value
        y = yVal;                                                // Calculate and assign value
    }
};

Point addPoints(Point p1, Point p2) {
    Point result(p1.x + p2.x, p1.y + p2.y);                      // Instantiate object
    return result;                                               // Return computed result result
}

int main() {
    Point a(3, 4);                                               // Instantiate object
    Point b(5, 6);                                               // Instantiate object
    Point c = addPoints(a, b);                                   // Calculate and assign value
    std::cout << "Sum point: (" << c.x << ", " << c.y << ")\n";  // Display sum point
    return 0;                                                    // Exit program successfully
}
