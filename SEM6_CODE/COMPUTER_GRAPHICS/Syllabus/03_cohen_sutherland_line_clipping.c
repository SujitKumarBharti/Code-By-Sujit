#include <stdio.h>

#define INSIDE 0
#define LEFT 1
#define RIGHT 2
#define BOTTOM 4
#define TOP 8

const int X_MIN = 10, Y_MIN = 10, X_MAX = 100, Y_MAX = 100;                           // Initialize variable

int computeCode(double x, double y) {
    int code = INSIDE;                                                                // Initialize variable
    if (x < X_MIN) code |= LEFT;                                                      // Evaluate comparison condition
    else if (x > X_MAX) code |= RIGHT;                                                // Evaluate comparison condition
    if (y < Y_MIN) code |= BOTTOM;                                                    // Evaluate comparison condition
    else if (y > Y_MAX) code |= TOP;                                                  // Evaluate comparison condition
    return code;                                                                      // Return computed result code
}

void cohenSutherlandClip(double x0, double y0, double x1, double y1) {
    int code0 = computeCode(x0, y0);                                                  // Initialize variable
    int code1 = computeCode(x1, y1);                                                  // Initialize variable
    int accept = 0;                                                                   // Initialize variable
    while (1) {                                                                       // Iterate while condition holds
        if ((code0 == 0) && (code1 == 0)) {                                           // Check if value equals zero
            accept = 1;                                                               // Calculate and assign value
            break;                                                                    // Exit loop or switch block
        } else if (code0 & code1) {                                                   // Check condition
            break;                                                                    // Exit loop or switch block
        } else {
            double x, y;                                                              // Declare variable
            int outcode = code0 ? code0 : code1;                                      // Initialize variable
            if (outcode & TOP) {                                                      // Check condition
                x = x0 + (x1 - x0) * (Y_MAX - y0) / (y1 - y0);                        // Calculate and assign value
                y = Y_MAX;                                                            // Calculate and assign value
            } else if (outcode & BOTTOM) {                                            // Check condition
                x = x0 + (x1 - x0) * (Y_MIN - y0) / (y1 - y0);                        // Calculate and assign value
                y = Y_MIN;                                                            // Calculate and assign value
            } else if (outcode & RIGHT) {                                             // Check condition
                y = y0 + (y1 - y0) * (X_MAX - x0) / (x1 - x0);                        // Calculate and assign value
                x = X_MAX;                                                            // Calculate and assign value
            } else {
                y = y0 + (y1 - y0) * (X_MIN - x0) / (x1 - x0);                        // Calculate and assign value
                x = X_MIN;                                                            // Calculate and assign value
            }
            if (outcode == code0) {                                                   // Check condition
                x0 = x; y0 = y;                                                       // Calculate and assign value
                code0 = computeCode(x0, y0);                                          // Calculate and assign value
            } else {
                x1 = x; y1 = y;                                                       // Calculate and assign value
                code1 = computeCode(x1, y1);                                          // Calculate and assign value
            }
        }
    }
    if (accept) {                                                                     // Check condition
        printf("Line accepted from (%.2f, %.2f) to (%.2f, %.2f)\n", x0, y0, x1, y1);  // Display line accepted from (
    } else {
        printf("Line completely outside clipping window\n");                          // Display output result
    }
}

int main() {
    cohenSutherlandClip(5, 5, 120, 120);
    return 0;                                                                         // Exit program successfully
}
