#include <stdio.h>

int main() {
    int total_frames = 5;                                                        // Initialize variable
    int ack[6] = {0};                                                            // Initialize variable
    printf("Sender: Transmitting initial window of %d frames\n", total_frames);  // Display sender
    for (int i = 1; i <= total_frames; i++) {                                    // Loop through elements
        printf("Sender: Transmitting Frame %d\n", i);                            // Display sender
    }
    ack[2] = 1;                                                                  // Calculate and assign value
    ack[1] = 1;                                                                  // Calculate and assign value
    ack[3] = 0;                                                                  // Calculate and assign value
    ack[4] = 1;                                                                  // Calculate and assign value
    ack[5] = 1;                                                                  // Calculate and assign value
    for (int i = 1; i <= total_frames; i++) {                                    // Loop through elements
        if (ack[i] == 0) {                                                       // Check if value equals zero
            printf("Receiver: NAK for Frame %d (Lost)\n", i);                    // Display receiver
            printf("Sender: Retransmitting only Frame %d\n", i);                 // Display sender
            printf("Receiver: ACK received for Frame %d\n", i);                  // Display receiver
        }
    }
    printf("Selective Repeat Protocol simulated successfully.\n");               // Display output result
    return 0;                                                                    // Exit program successfully
}
