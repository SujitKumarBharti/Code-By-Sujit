#include <stdio.h>

int add(int a, int b) {                         // Declare variables for calculation
    return a + b;
}

int main(void) {
    int x = 15, y = 25;                         // Initialize variable
    printf("%d + %d = %d\n", x, y, add(x, y));  // Display add two numbers using a function result
    return 0;                                   // Exit program successfully
}
