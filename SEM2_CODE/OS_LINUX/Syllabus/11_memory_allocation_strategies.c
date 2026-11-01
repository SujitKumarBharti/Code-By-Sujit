#include <stdio.h>

void firstFit(int blockSize[], int m, int processSize[], int n) {
    int alloc[n];                                             // Declare variable
    for (int i = 0; i < n; i++) alloc[i] = -1;                // Loop through elements
    for (int i = 0; i < n; i++) {                             // Loop through elements
        for (int j = 0; j < m; j++) {                         // Loop through elements
            if (blockSize[j] >= processSize[i]) {             // Evaluate comparison condition
                alloc[i] = j;                                 // Calculate and assign value
                blockSize[j] -= processSize[i];               // Accumulate updated value
                break;                                        // Exit loop or switch block
            }
        }
    }
    printf("First Fit Allocation:\n");                        // Display first fit allocation
    for (int i = 0; i < n; i++) {                             // Loop through elements
        printf("Process %d -> Block %d\n", i + 1, alloc[i]);  // Display process
    }
}

int main() {
    int blockSize[3] = {100, 500, 200};                       // Initialize variable
    int processSize[3] = {90, 150, 300};                      // Initialize variable
    firstFit(blockSize, 3, processSize, 3);
    return 0;                                                 // Exit program successfully
}
