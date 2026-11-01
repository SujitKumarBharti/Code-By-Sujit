#include <stdio.h>

int main() {
    int total_frames = 6;                                                      // Initialize variable
    int window_size = 3;                                                       // Initialize variable
    int sent = 1;                                                              // Initialize variable
    while (sent <= total_frames) {                                             // Iterate while condition holds
        printf("Sending window: ");                                            // Display sending window
        for (int i = 0; i < window_size && (sent + i) <= total_frames; i++) {  // Loop through elements
            printf("%d ", sent + i);                                           // Display , sent + i);
        }
        printf("\n");                                                          // Display output result
        printf("Receiver: ACK received for Frame %d\n", sent);                 // Display receiver
        sent++;                                                                // Increment counter
    }
    printf("All frames transferred via Go-Back-N\n");                          // Display output result
    return 0;                                                                  // Exit program successfully
}
