#include <stdio.h>

void bezierCurve(double p0, double p1, double p2, double p3) {
    printf("Bezier Curve Sample Points (t from 0.0 to 1.0):\n");                                        // Display output result
    for (double t = 0.0; t <= 1.01; t += 0.25) {                                                        // Loop through elements
        double u = 1.0 - t;                                                                             // Initialize variable
        double pt = (u * u * u * p0) + (3 * u * u * t * p1) + (3 * u * t * t * p2) + (t * t * t * p3);  // Initialize variable
        printf("t = %.2f -> Coordinate = %.2f\n", t, pt);                                               // Display t =
    }
}

int main() {
    bezierCurve(0.0, 20.0, 80.0, 100.0);
    return 0;                                                                                           // Exit program successfully
}
