#include <stdio.h>

int main() {
    int n = 3;                                                     // Initialize variable
    int bt[3] = {5, 8, 12};                                        // Initialize variable
    int wt[3], tat[3];                                             // Declare variable
    wt[0] = 0;                                                     // Calculate and assign value
    tat[0] = bt[0];                                                // Calculate and assign value
    for (int i = 1; i < n; i++) {                                  // Loop through elements
        wt[i] = wt[i - 1] + bt[i - 1];                             // Calculate and assign value
        tat[i] = wt[i] + bt[i];                                    // Calculate and assign value
    }
    printf("Process\tBT\tWT\tTAT\n");                              // Display process\tbt\twt\ttat\n
    for (int i = 0; i < n; i++) {                                  // Loop through elements
        printf("P%d\t%d\t%d\t%d\n", i + 1, bt[i], wt[i], tat[i]);  // Display p
    }
    return 0;                                                      // Exit program successfully
}
