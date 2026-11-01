#include <stdio.h>

int main(void) {
    int age;                                                             // Declare variables for calculation
    printf("Enter your age: ");                                          // Prompt user for input
    if (scanf("%d", &age) == 1) {                                        // Read input from user
        if (age >= 18)                                                   // Check condition
            printf("Eligible to vote.\n");                               // Display check whether a person is eligib... result
        else
            printf("Not eligible to vote. Years left: %d\n", 18 - age);  // Display check whether a person is eligib... result
    }
    return 0;                                                            // Exit program successfully
}
