#include <stdio.h>

void swapNumbers(int *a, int *b) {
    int temp = *a;                                  // Initialize variable
    *a = *b;                                        // Perform calculation
    *b = temp;                                      // Perform calculation
}

int main(void) {
    int x = 100, y = 200;                           // Initialize variable
    printf("Before swap: x = %d, y = %d\n", x, y);  // Display swap two numbers using pointers result
    swapNumbers(&x, &y);
    printf("After swap : x = %d, y = %d\n", x, y);  // Display swap two numbers using pointers result
    return 0;                                       // Exit program successfully
}
