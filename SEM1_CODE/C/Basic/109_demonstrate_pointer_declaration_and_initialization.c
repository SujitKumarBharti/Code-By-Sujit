#include <stdio.h>

int main(void) {
    int num = 42;                                      // Initialize variable
    int *ptr = &num;                                   // Initialize variable

    printf("Value of num      : %d\n", num);           // Display demonstrate pointer declaration ... result
    printf("Address of num    : %p\n", (void *)&num);  // Display demonstrate pointer declaration ... result
    printf("Value of ptr      : %p\n", (void *)ptr);   // Display demonstrate pointer declaration ... result
    printf("Value pointed by ptr: %d\n", *ptr);        // Display demonstrate pointer declaration ... result
    return 0;                                          // Exit program successfully
}
