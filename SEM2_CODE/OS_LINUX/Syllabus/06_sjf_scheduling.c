#include <stdio.h>

int main() {
    int n = 4;                                          // Initialize variable
    int p[4] = {1, 2, 3, 4};                            // Initialize variable
    int bt[4] = {6, 8, 7, 3};                           // Initialize variable
    for (int i = 0; i < n - 1; i++) {                   // Loop through elements
        for (int j = i + 1; j < n; j++) {               // Loop through elements
            if (bt[i] > bt[j]) {                        // Evaluate comparison condition
                int temp = bt[i];                       // Initialize variable
                bt[i] = bt[j];                          // Calculate and assign value
                bt[j] = temp;                           // Swap value using temporary variable
                temp = p[i];                            // Swap value using temporary variable
                p[i] = p[j];                            // Calculate and assign value
                p[j] = temp;                            // Swap value using temporary variable
            }
        }
    }
    printf("SJF Execution Order:\n");                   // Display sjf execution order
    for (int i = 0; i < n; i++) {                       // Loop through elements
        printf("Process P%d (BT: %d)\n", p[i], bt[i]);  // Display process p
    }
    return 0;                                           // Exit program successfully
}
