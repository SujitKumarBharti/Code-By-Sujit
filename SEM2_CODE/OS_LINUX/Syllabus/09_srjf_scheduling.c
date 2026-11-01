#include <stdio.h>

int main() {
    int n = 3;                                                    // Initialize variable
    int at[3] = {0, 1, 2};                                        // Initialize variable
    int bt[3] = {6, 4, 2};                                        // Initialize variable
    int rem[3] = {6, 4, 2};                                       // Initialize variable
    int completed = 0, t = 0;                                     // Initialize variable
    while (completed < n) {                                       // Iterate while condition holds
        int idx = -1, min_rem = 9999;                             // Initialize variable
        for (int i = 0; i < n; i++) {                             // Loop through elements
            if (at[i] <= t && rem[i] > 0 && rem[i] < min_rem) {   // Evaluate comparison condition
                min_rem = rem[i];                                 // Calculate and assign value
                idx = i;                                          // Calculate and assign value
            }
        }
        if (idx != -1) {                                          // Check condition
            rem[idx]--;                                           // Decrement counter
            t++;                                                  // Increment counter
            if (rem[idx] == 0) {                                  // Check if value equals zero
                completed++;                                      // Increment counter
                printf("P%d finished at time %d\n", idx + 1, t);  // Display p
            }
        } else {
            t++;                                                  // Increment counter
        }
    }
    return 0;                                                     // Exit program successfully
}
