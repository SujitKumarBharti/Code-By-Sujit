#include <stdio.h>

void scanlineFill(int yMin, int yMax, int xMin, int xMax) {
    printf("Scanline Polygon Fill Simulation:\n");                               // Display output result
    for (int scanY = yMin; scanY <= yMax; scanY++) {                             // Loop through elements
        printf("Scanline Y=%d active span: X=%d to X=%d\n", scanY, xMin, xMax);  // Display scanline y=
    }
}

int main() {
    scanlineFill(2, 6, 10, 15);
    return 0;                                                                    // Exit program successfully
}
