#include <stdio.h>
#include <pthread.h>

long long sum = 0;                                                       // Initialize variable
int limit = 100;                                                         // Initialize variable

void *calcSum(void *arg) {
    for (int i = 1; i <= limit; i++) {                                   // Loop through elements
        sum += i;                                                        // Accumulate updated value
    }
    return NULL;                                                         // Return computed result NULL
}

int main() {
    pthread_t tid;
    pthread_create(&tid, NULL, calcSum, NULL);
    pthread_join(tid, NULL);
    printf("Sum of first %d numbers using thread: %lld\n", limit, sum);  // Display sum of first
    return 0;                                                            // Exit program successfully
}
