#include <iostream>

void test(int val) {
    try {
        if (val == 1) {                                             // Check condition
            throw 100;
        } else if (val == 2) {                                      // Check condition
            throw 'E';
        } else {
            throw 3.14;
        }
    } catch (int code) {
        std::cout << "Caught integer exception: " << code << "\n";  // Display caught integer exception
    } catch (char ch) {
        std::cout << "Caught char exception: " << ch << "\n";       // Display caught char exception
    } catch (double d) {
        std::cout << "Caught double exception: " << d << "\n";      // Display caught double exception
    }
}

int main() {
    test(1);
    test(2);
    test(3);
    return 0;                                                       // Exit program successfully
}
