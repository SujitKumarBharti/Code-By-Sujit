#include <stdio.h>

int main(void) {
    double km, meters, cm;                                                     // Declare variables for calculation
    printf("Enter distance in kilometers: ");                                  // Prompt user for input
    if (scanf("%lf", &km) == 1) {                                              // Read input from user
        meters = km * 1000.0;                                                  // Perform calculation
        cm = km * 100000.0;                                                    // Perform calculation
        printf("%.2f km = %.2f meters = %.2f centimeters\n", km, meters, cm);  // Display convert kilometers into meters a... result
    }
    return 0;                                                                  // Exit program successfully
}
