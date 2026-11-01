#include <stdio.h>

int main() {
    int n = 3;                                                   // Initialize variable
    int at[3] = {0, 1, 2};                                       // Initialize variable
    int bt[3] = {4, 3, 1};                                       // Initialize variable
    int pri[3] = {2, 1, 3};                                      // Initialize variable
    int rem[3] = {4, 3, 1};                                      // Initialize variable
    int completed = 0, t = 0;                                    // Initialize variable
    while (completed < n) {                                      // Iterate while condition holds
        int highest = -1, min_pri = 9999;                        // Initialize variable
        for (int i = 0; i < n; i++) {                            // Loop through elements
            if (at[i] <= t && rem[i] > 0 && pri[i] < min_pri) {  // Evaluate comparison condition
                min_pri = pri[i];                                // Calculate and assign value
                highest = i;                                     // Calculate and assign value
            }
        }
        if (highest != -1) {                                     // Check condition
            rem[highest]--;                                      // Decrement counter
            t++;                                                 // Increment counter
            if (rem[highest] == 0) {                             // Check if value equals zero
                completed++;                                     // Increment counter
                printf("P%d finished at %d\n", highest + 1, t);  // Display p
            }
        } else {
            t++;                                                 // Increment counter
        }
    }
    return 0;                                                    // Exit program successfully
}
