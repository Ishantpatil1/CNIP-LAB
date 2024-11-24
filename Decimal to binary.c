#include <stdio.h>
#include <stdbool.h>

bool readIpAddress(int ipaddr[4]) {
    printf("Enter the IP address (4 integers separated by spaces): ");
    if (scanf("%d.%d.%d.%d", &ipaddr[0], &ipaddr[1], &ipaddr[2], &ipaddr[3]) == 4) {
        for (int i = 0; i < 4; i++) {
            if (ipaddr[i] < 0 || ipaddr[i] > 255) {
                printf("Invalid IP address segment: %d\n", ipaddr[i]);
                return false;
            }
        }
        return true;
    }
    printf("Invalid input format.\n");
    return false;
}

void convertDecToBin(int dec[], char bin[4][9]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 7; j >= 0; j--) {
            bin[i][j] = (dec[i] & 1) + '0'; // Get the least significant bit
            dec[i] >>= 1; // Shift right by 1 bit
        }
        bin[i][8] = '\0'; // Null-terminate the binary string
    }
}

int main() {
    char bin2[4][9]; // 4 binary strings, each with 8 bits + null terminator
    int ipaddr[4];

    if (!readIpAddress(ipaddr)) {
        return 1; // Exit the program if the IP address is invalid
    }

    convertDecToBin(ipaddr, bin2);

    printf("The address converted to binary is:\n");
    printf("%8s %8s %8s %8s\n", bin2[0], bin2[1], bin2[2], bin2[3]);

    return 0;
}
