#include <stdio.h>
#include <string.h>

void xorDivision(char data[], const char gen[], int dataLen, int genLen) {
    for (int i = 0; i <= dataLen - genLen; i++) {                       // Loop through elements
        if (data[i] == '1') {                                           // Check condition
            for (int j = 0; j < genLen; j++) {                          // Loop through elements
                data[i + j] = (data[i + j] == gen[j]) ? '0' : '1';
            }
        }
    }
}

int main() {
    char data[64] = "11010011101100";                                   // Initialize variable
    char gen[] = "1011";                                                // Initialize variable
    char rem[64];                                                       // Declare variable
    int dataLen = strlen(data);                                         // Initialize variable
    int genLen = strlen(gen);                                           // Initialize variable
    strcpy(rem, data);
    xorDivision(rem, gen, dataLen, genLen);
    printf("Transmitted Data: %s\n", data);                             // Display transmitted data
    printf("CRC Generator: %s\n", gen);                                 // Display crc generator
    printf("Calculated Checksum: %s\n", rem + (dataLen - genLen + 1));  // Display calculated checksum
    return 0;                                                           // Exit program successfully
}
