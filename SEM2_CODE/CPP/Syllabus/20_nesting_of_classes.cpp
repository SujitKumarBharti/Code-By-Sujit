#include <iostream>
#include <string>

class CPU {
public:
    class ALU {
    public:
        int add(int a, int b) {
            return a + b;                                              // Return computed result a + b
        }
    };
    ALU alu;                                                           // Instantiate object
    void compute() {
        std::cout << "ALU computed sum: " << alu.add(10, 20) << "\n";  // Display alu computed sum
    }
};

int main() {
    CPU cpu;                                                           // Instantiate object
    cpu.compute();
    return 0;                                                          // Exit program successfully
}
