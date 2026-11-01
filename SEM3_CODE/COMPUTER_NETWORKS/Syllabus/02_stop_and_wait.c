#include <stdio.h>

int main() {
    int frames = 4;                                               // Initialize variable
    for (int i = 1; i <= frames; i++) {                           // Loop through elements
        printf("Sender: Sending Frame %d\n", i);                  // Display sender
        printf("Receiver: Frame %d received successfully\n", i);  // Display receiver
        printf("Receiver: Sending ACK %d\n", i);                  // Display receiver
        printf("Sender: ACK %d received, ready for next\n", i);   // Display sender
    }
    printf("All frames transmitted via Stop and Wait\n");         // Display output result
    return 0;                                                     // Exit program successfully
}
