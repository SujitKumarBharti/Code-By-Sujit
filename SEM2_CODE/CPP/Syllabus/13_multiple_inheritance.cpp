#include <iostream>

class Academic {
private:
    int marks;                                           // Declare variable
public:
    void readMarks() {
        std::cout << "Enter Marks: ";                    // Prompt user to enter Marks
        std::cin >> marks;                               // Read input from standard input
    }
    void showMarks() const {
        std::cout << "Marks: " << marks << "\n";         // Display marks
    }
};

class Sports {
private:
    int score;                                           // Declare variable
public:
    void readScore() {
        std::cout << "Enter Sports Score: ";             // Prompt user to enter Sports Score
        std::cin >> score;                               // Read input from standard input
    }
    void showScore() const {
        std::cout << "Sports Score: " << score << "\n";  // Display sports score
    }
};

class Result : public Academic, public Sports {
public:
    void readAll() {
        readMarks();
        readScore();
    }
    void showAll() const {
        showMarks();
        showScore();
    }
};

int main() {
    Result r;                                            // Instantiate object
    r.readAll();
    r.showAll();
    return 0;                                            // Exit program successfully
}
