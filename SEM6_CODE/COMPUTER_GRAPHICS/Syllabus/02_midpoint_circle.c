#include <stdio.h>

void plotCirclePoints(int xc, int yc, int x, int y) {
    printf("(%d, %d) ", xc + x, yc + y);                                            // Display (
    printf("(%d, %d) ", xc - x, yc + y);                                            // Display (
    printf("(%d, %d) ", xc + x, yc - y);                                            // Display (
    printf("(%d, %d)\n", xc - x, yc - y);                                           // Display (
}

void midpointCircle(int xc, int yc, int r) {
    int x = 0;                                                                      // Initialize variable
    int y = r;                                                                      // Initialize variable
    int p = 1 - r;                                                                  // Initialize variable
    printf("Midpoint Circle Points for center (%d, %d), radius %d:\n", xc, yc, r);  // Display output result
    plotCirclePoints(xc, yc, x, y);
    while (x < y) {                                                                 // Iterate while condition holds
        x++;                                                                        // Increment counter
        if (p < 0) {                                                                // Check for negative value
            p += 2 * x + 1;                                                         // Accumulate updated value
        } else {
            y--;                                                                    // Decrement counter
            p += 2 * (x - y) + 1;                                                   // Accumulate updated value
        }
        plotCirclePoints(xc, yc, x, y);
    }
}

int main() {
    midpointCircle(0, 0, 5);
    return 0;                                                                       // Exit program successfully
}
