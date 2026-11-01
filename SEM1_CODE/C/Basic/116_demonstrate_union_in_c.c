#include <stdio.h>
#include <string.h>

union Data {
    int i;                                                          // Declare variables for calculation
    float f;                                                        // Declare variables for calculation
    char str[20];                                                   // Declare variables for calculation
};

int main(void) {
    union Data data;

    data.i = 10;                                                    // Perform calculation
    printf("data.i : %d\n", data.i);                                // Display demonstrate union in C result

    data.f = 220.5f;                                                // Perform calculation
    printf("data.f : %.2f\n", data.f);                              // Display demonstrate union in C result

    strcpy(data.str, "C Union");
    printf("data.str : %s\n", data.str);                            // Display demonstrate union in C result

    printf("Size of union Data: %zu bytes\n", sizeof(union Data));  // Display demonstrate union in C result
    return 0;                                                       // Exit program successfully
}
