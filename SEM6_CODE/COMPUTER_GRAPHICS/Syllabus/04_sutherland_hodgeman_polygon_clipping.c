#include <stdio.h>

#define MAX_POINTS 20

typedef struct {
    double x, y;                                                                                 // Declare variable
} Point;

void clipLeft(Point in[], int inLen, Point out[], int *outLen, double xMin) {
    *outLen = 0;                                                                                 // Calculate and assign value
    for (int i = 0; i < inLen; i++) {                                                            // Loop through elements
        Point curr = in[i];                                                                      // Calculate and assign value
        Point prev = in[(i + inLen - 1) % inLen];                                                // Calculate and assign value
        if (curr.x >= xMin) {                                                                    // Evaluate comparison condition
            if (prev.x < xMin) {                                                                 // Evaluate comparison condition
                Point intersect;                                                                 // Instantiate object
                intersect.x = xMin;                                                              // Calculate and assign value
                intersect.y = prev.y + (curr.y - prev.y) * (xMin - prev.x) / (curr.x - prev.x);  // Calculate and assign value
                out[(*outLen)++] = intersect;                                                    // Calculate and assign value
            }
            out[(*outLen)++] = curr;                                                             // Calculate and assign value
        } else if (prev.x >= xMin) {                                                             // Evaluate comparison condition
            Point intersect;                                                                     // Instantiate object
            intersect.x = xMin;                                                                  // Calculate and assign value
            intersect.y = prev.y + (curr.y - prev.y) * (xMin - prev.x) / (curr.x - prev.x);      // Calculate and assign value
            out[(*outLen)++] = intersect;                                                        // Calculate and assign value
        }
    }
}

int main() {
    Point poly[3] = {{5.0, 10.0}, {50.0, 80.0}, {80.0, 20.0}};                                   // Calculate and assign value
    Point clipped[MAX_POINTS];
    int len = 0;                                                                                 // Initialize variable
    clipLeft(poly, 3, clipped, &len, 10.0);
    printf("Sutherland-Hodgeman Polygon Clipped Vertices (Left Boundary):\n");                   // Display output result
    for (int i = 0; i < len; i++) {                                                              // Loop through elements
        printf("(%.2f, %.2f)\n", clipped[i].x, clipped[i].y);                                    // Display (
    }
    return 0;                                                                                    // Exit program successfully
}
