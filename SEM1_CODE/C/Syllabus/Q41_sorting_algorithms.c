#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef void (*SortFunction)(int[], int);

void bubble_sort(int values[], int count) {
    for (int end = count - 1; end > 0; end--)                                        // Loop through elements
        for (int index = 0; index < end; index++)                                    // Loop through elements
            if (values[index] > values[index + 1]) {                                 // Evaluate comparison condition
                int temporary = values[index];                                       // Initialize variable
                values[index] = values[index + 1];                                   // Calculate and assign value
                values[index + 1] = temporary;                                       // Swap value using temporary variable
            }
}

void selection_sort(int values[], int count) {
    for (int start = 0; start < count - 1; start++) {                                // Loop through elements
        int smallest = start;                                                        // Initialize variable
        for (int index = start + 1; index < count; index++)                          // Loop through elements
            if (values[index] < values[smallest]) smallest = index;                  // Evaluate comparison condition
        int temporary = values[start];                                               // Initialize variable
        values[start] = values[smallest];                                            // Calculate and assign value
        values[smallest] = temporary;                                                // Swap value using temporary variable
    }
}

void insertion_sort(int values[], int count) {
    for (int index = 1; index < count; index++) {                                    // Loop through elements
        int current = values[index];                                                 // Initialize variable
        int position = index;                                                        // Initialize variable
        while (position > 0 && values[position - 1] > current) {                     // Iterate while condition holds
            values[position] = values[position - 1];                                 // Calculate and assign value
            position--;                                                              // Decrement counter
        }
        values[position] = current;                                                  // Calculate and assign value
    }
}

void quick_sort_range(int values[], int low, int high) {
    if (low >= high) return;                                                         // Evaluate comparison condition
    int pivot = values[low + (high - low) / 2];                                      // Initialize variable
    int left = low;                                                                  // Initialize variable
    int right = high;                                                                // Initialize variable
    while (left <= right) {                                                          // Iterate while condition holds
        while (values[left] < pivot) left++;                                         // Iterate while condition holds
        while (values[right] > pivot) right--;                                       // Iterate while condition holds
        if (left <= right) {                                                         // Evaluate comparison condition
            int temporary = values[left];                                            // Initialize variable
            values[left++] = values[right];                                          // Calculate and assign value
            values[right--] = temporary;                                             // Swap value using temporary variable
        }
    }
    if (low < right) quick_sort_range(values, low, right);                           // Evaluate comparison condition
    if (left < high) quick_sort_range(values, left, high);                           // Evaluate comparison condition
}

void quick_sort(int values[], int count) {
    quick_sort_range(values, 0, count - 1);
}

void heapify(int values[], int count, int root) {
    int largest = root;                                                              // Initialize variable
    int left = 2 * root + 1;                                                         // Initialize variable
    int right = 2 * root + 2;                                                        // Initialize variable
    if (left < count && values[left] > values[largest]) largest = left;              // Evaluate comparison condition
    if (right < count && values[right] > values[largest]) largest = right;           // Evaluate comparison condition
    if (largest != root) {                                                           // Check condition
        int temporary = values[root];                                                // Initialize variable
        values[root] = values[largest];                                              // Calculate and assign value
        values[largest] = temporary;                                                 // Swap value using temporary variable
        heapify(values, count, largest);
    }
}

void heap_sort(int values[], int count) {
    for (int root = count / 2 - 1; root >= 0; root--) heapify(values, count, root);  // Loop through elements
    for (int end = count - 1; end > 0; end--) {                                      // Loop through elements
        int temporary = values[0];                                                   // Initialize variable
        values[0] = values[end];                                                     // Calculate and assign value
        values[end] = temporary;                                                     // Swap value using temporary variable
        heapify(values, end, 0);
    }
}

void merge_ranges(int values[], int temporary[], int low, int middle, int high) {
    int left = low;                                                                  // Initialize variable
    int right = middle;                                                              // Initialize variable
    int output = low;                                                                // Initialize variable
    while (left < middle && right < high)                                            // Iterate while condition holds
        temporary[output++] = values[left] <= values[right]                          // Swap value using temporary variable
                                  ? values[left++] : values[right++];
    while (left < middle) temporary[output++] = values[left++];                      // Iterate while condition holds
    while (right < high) temporary[output++] = values[right++];                      // Iterate while condition holds
    for (int index = low; index < high; index++) values[index] = temporary[index];   // Loop through elements
}

void merge_sort_range(int values[], int temporary[], int low, int high) {
    if (high - low < 2) return;                                                      // Evaluate comparison condition
    int middle = low + (high - low) / 2;                                             // Initialize variable
    merge_sort_range(values, temporary, low, middle);
    merge_sort_range(values, temporary, middle, high);
    merge_ranges(values, temporary, low, middle, high);
}

void merge_sort(int values[], int count) {
    int temporary[MAX_SIZE];                                                         // Declare variable
    merge_sort_range(values, temporary, 0, count);
}

void radix_sort(int values[], int count) {
    int output[MAX_SIZE];                                                            // Declare variable
    for (unsigned int shift = 0; shift < 32; shift += 8) {                           // Loop through elements
        int counts[256] = {0};                                                       // Initialize variable
        for (int index = 0; index < count; index++) {                                // Loop through elements
            uint32_t key = (uint32_t)values[index] ^ UINT32_C(0x80000000);           // Calculate and assign value
            counts[(key >> shift) & 0xFFU]++;                                        // Increment counter
        }
        int total = 0;                                                               // Initialize variable
        for (int bucket = 0; bucket < 256; bucket++) {                               // Loop through elements
            int frequency = counts[bucket];                                          // Initialize variable
            counts[bucket] = total;                                                  // Calculate and assign value
            total += frequency;                                                      // Accumulate updated value
        }
        for (int index = 0; index < count; index++) {                                // Loop through elements
            uint32_t key = (uint32_t)values[index] ^ UINT32_C(0x80000000);           // Calculate and assign value
            unsigned int bucket = (key >> shift) & 0xFFU;                            // Initialize variable
            output[counts[bucket]++] = values[index];                                // Calculate and assign value
        }
        memcpy(values, output, (size_t)count * sizeof(values[0]));
    }
}

void shell_sort(int values[], int count) {
    for (int gap = count / 2; gap > 0; gap /= 2) {                                   // Loop through elements
        for (int index = gap; index < count; index++) {                              // Loop through elements
            int current = values[index];                                             // Initialize variable
            int position = index;                                                    // Initialize variable
            while (position >= gap && values[position - gap] > current) {            // Iterate while condition holds
                values[position] = values[position - gap];                           // Calculate and assign value
                position -= gap;                                                     // Accumulate updated value
            }
            values[position] = current;                                              // Calculate and assign value
        }
    }
}

int main(void) {
    SortFunction sorts[] = {
        selection_sort, bubble_sort, insertion_sort, quick_sort,
        heap_sort, merge_sort, radix_sort, shell_sort
    };
    const char *names[] = {
        "Selection", "Bubble", "Insertion", "Quick",
        "Heap", "Merge", "Radix", "Shell"
    };
    int values[MAX_SIZE];                                                            // Declare variable
    int count;                                                                       // Declare variable

    printf("Enter number of integers (1-%d): ", MAX_SIZE);                           // Prompt user to enter number of integers (1-%d)
    if (scanf("%d", &count) != 1 || count < 1 || count > MAX_SIZE) return 1;         // Read user input values
    printf("Enter integers: ");                                                      // Prompt user to enter integers
    for (int index = 0; index < count; index++)                                      // Loop through elements
        if (scanf("%d", &values[index]) != 1) return 1;                              // Read user input values

    for (size_t sort = 0; sort < sizeof(sorts) / sizeof(sorts[0]); sort++) {         // Loop through elements
        int copy[MAX_SIZE];                                                          // Declare variable
        memcpy(copy, values, (size_t)count * sizeof(values[0]));
        sorts[sort](copy, count);
        printf("%s sort:", names[sort]);                                             // Display , names[sort]);
        for (int index = 0; index < count; index++) printf(" %d", copy[index]);      // Display output result
        printf("\n");                                                                // Display output result
    }
    return 0;                                                                        // Exit program successfully
}
