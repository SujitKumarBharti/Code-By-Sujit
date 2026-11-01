#include <stdio.h>

int main() {
    int n = 3;                                                // Initialize variable
    int p[3] = {1, 2, 3};                                     // Initialize variable
    int bt[3] = {10, 5, 8};                                   // Initialize variable
    int pri[3] = {2, 1, 3};                                   // Initialize variable
    for (int i = 0; i < n - 1; i++) {                         // Loop through elements
        for (int j = i + 1; j < n; j++) {                     // Loop through elements
            if (pri[i] > pri[j]) {                            // Evaluate comparison condition
                int t = pri[i]; pri[i] = pri[j]; pri[j] = t;  // Initialize variable
                t = bt[i]; bt[i] = bt[j]; bt[j] = t;          // Calculate and assign value
                t = p[i]; p[i] = p[j]; p[j] = t;              // Calculate and assign value
            }
        }
    }
    printf("Priority Scheduling (Non-preemptive):\n");        // Display output result
    for (int i = 0; i < n; i++) {                             // Loop through elements
        printf("P%d with priority %d\n", p[i], pri[i]);       // Display p
    }
    return 0;                                                 // Exit program successfully
}
