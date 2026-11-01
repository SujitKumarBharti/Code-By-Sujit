#include <iostream>
#include <cstring>
using namespace std;

union Data {
    int i;                                                               // Declare variables for calculation
    float f;                                                             // Declare variables for calculation
    char str[20];                                                        // Declare variables for calculation
};

int main() {
    Data data;

    data.i = 10;                                                         // Perform calculation
    cout << "data.i : " << data.i << endl;                               // Display demonstrate union in C (and C++) result

    data.f = 220.5f;                                                     // Perform calculation
    cout << "data.f : " << data.f << endl;                               // Display demonstrate union in C (and C++) result

    strcpy(data.str, "C++ Union");
    cout << "data.str : " << data.str << endl;                           // Display demonstrate union in C (and C++) result

    cout << "Size of Data union: " << sizeof(Data) << " bytes" << endl;  // Display demonstrate union in C (and C++) result
    return 0;                                                            // Exit program successfully
}
