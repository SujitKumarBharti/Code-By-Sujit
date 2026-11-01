#include <iostream>

class Student {
public:
    int roll;                                                       // Declare variable
    void getRoll(int r) {
        roll = r;                                                   // Calculate and assign value
    }
    void printRoll() const {
        std::cout << "Roll: " << roll << "\n";                      // Display roll
    }
};

class Test : virtual public Student {
public:
    int part1;                                                      // Declare variable
    int part2;                                                      // Declare variable
    void getMarks(int x, int y) {
        part1 = x;                                                  // Calculate and assign value
        part2 = y;                                                  // Calculate and assign value
    }
};

class Sports : virtual public Student {
public:
    int score;                                                      // Declare variable
    void getScore(int s) {
        score = s;                                                  // Calculate and assign value
    }
};

class Result : public Test, public Sports {
public:
    void display() const {
        printRoll();
        std::cout << "Total: " << (part1 + part2 + score) << "\n";  // Display total
    }
};

int main() {
    Result res;                                                     // Instantiate object
    res.getRoll(201);
    res.getMarks(45, 48);
    res.getScore(10);
    res.display();                                                  // Call member function display()
    return 0;                                                       // Exit program successfully
}
