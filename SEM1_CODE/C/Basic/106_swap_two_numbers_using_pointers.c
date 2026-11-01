#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;                                  // Initialize variable
    *x = *y;                                        // Perform calculation
    *y = temp;                                      // Perform calculation
}

int main(void) {
    int a = 10, b = 20;                             // Initialize variable
    printf("Before swap: a = %d, b = %d\n", a, b);  // Display swap two numbers using pointers result
    swap(&a, &b);
    printf("After swap : a = %d, b = %d\n", a, b);  // Display swap two numbers using pointers result
    return 0;                                       // Exit program successfully
}
