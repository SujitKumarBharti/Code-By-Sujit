#include <stdio.h>

int main(void) {
    int year;                                                         // Declare variables for calculation
    printf("Enter a year: ");                                         // Prompt user for input
    if (scanf("%d", &year) == 1) {                                    // Read input from user
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))  // Check condition
            printf("%d is a Leap Year.\n", year);                     // Display check whether a year is a leap year result
        else
            printf("%d is NOT a Leap Year.\n", year);                 // Display check whether a year is a leap year result
    }
    return 0;                                                         // Exit program successfully
}
