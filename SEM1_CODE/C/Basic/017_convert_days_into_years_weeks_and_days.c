#include <stdio.h>

int main(void) {
    int total_days, years, weeks, days;                                                         // Declare variables for calculation
    printf("Enter number of days: ");                                                           // Prompt user for input
    if (scanf("%d", &total_days) == 1) {                                                        // Read input from user
        years = total_days / 365;                                                               // Perform calculation
        weeks = (total_days % 365) / 7;                                                         // Perform calculation
        days = (total_days % 365) % 7;                                                          // Perform calculation
        printf("%d days = %d years, %d weeks, and %d days\n", total_days, years, weeks, days);  // Display convert days into years, weeks, ... result
    }
    return 0;                                                                                   // Exit program successfully
}
