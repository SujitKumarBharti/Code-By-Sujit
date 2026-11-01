#include <stdio.h>
#include <stdlib.h>

void bresenhamLine(int x0, int y0, int x1, int y1) {
    int dx = abs(x1 - x0);                   // Initialize variable
    int dy = abs(y1 - y0);                   // Initialize variable
    int sx = (x0 < x1) ? 1 : -1;             // Initialize variable
    int sy = (y0 < y1) ? 1 : -1;             // Initialize variable
    int err = dx - dy;                       // Initialize variable
    printf("Bresenham Line Points:\n");      // Display bresenham line points
    while (1) {                              // Iterate while condition holds
        printf("(%d, %d)\n", x0, y0);        // Display (
        if (x0 == x1 && y0 == y1) break;     // Check condition
        int e2 = 2 * err;                    // Initialize variable
        if (e2 > -dy) {                      // Evaluate comparison condition
            err -= dy;                       // Accumulate updated value
            x0 += sx;                        // Accumulate updated value
        }
        if (e2 < dx) {                       // Evaluate comparison condition
            err += dx;                       // Accumulate updated value
            y0 += sy;                        // Accumulate updated value
        }
    }
}

int main() {
    bresenhamLine(1, 1, 8, 5);
    return 0;                                // Exit program successfully
}
