#include <iostream>

class AbstractStack {
public:
    virtual void push(int val) = 0;                // Calculate and assign value
    virtual int pop() = 0;                         // Calculate and assign value
    virtual ~AbstractStack() {}
};

class SimpleStack : public AbstractStack {
private:
    int data[10];                                  // Declare variable
    int topIndex;                                  // Declare variable
public:
    SimpleStack() {
        topIndex = -1;                             // Calculate and assign value
    }
    void push(int val) override {
        data[++topIndex] = val;                    // Calculate and assign value
    }
    int pop() override {
        return data[topIndex--];                   // Return computed result data[topIndex--]
    }
};

int main() {
    AbstractStack *st = new SimpleStack();         // Instantiate new object
    st->push(100);
    std::cout << "Popped: " << st->pop() << "\n";  // Display popped
    delete st;
    return 0;                                      // Exit program successfully
}
