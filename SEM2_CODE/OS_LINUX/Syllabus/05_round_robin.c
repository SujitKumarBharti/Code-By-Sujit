#include <stdio.h>

int main() {
    int n = 3, tq = 2;                                                      // Initialize variable
    int rem_bt[3] = {5, 3, 4};                                              // Initialize variable
    int t = 0;                                                              // Initialize variable
    while (1) {                                                             // Iterate while condition holds
        int done = 1;                                                       // Initialize variable
        for (int i = 0; i < n; i++) {                                       // Loop through elements
            if (rem_bt[i] > 0) {                                            // Evaluate comparison condition
                done = 0;                                                   // Calculate and assign value
                if (rem_bt[i] > tq) {                                       // Evaluate comparison condition
                    t += tq;                                                // Accumulate updated value
                    rem_bt[i] -= tq;                                        // Accumulate updated value
                } else {
                    t += rem_bt[i];                                         // Accumulate updated value
                    printf("Process P%d finished at time %d\n", i + 1, t);  // Display process p
                    rem_bt[i] = 0;                                          // Calculate and assign value
                }
            }
        }
        if (done == 1) break;                                               // Check condition
    }
    return 0;                                                               // Exit program successfully
}
