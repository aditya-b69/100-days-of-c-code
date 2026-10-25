#include <stdio.h>

int main() {
    unsigned long long n;

    if (scanf("%llu", &n) == 1) {
        if (n == 0) {
            printf("0\n");
            return 0;
        }

        // Find the highest bit position
        int highest_bit = 0;
        for (int i = 63; i >= 0; i--) {
            if ((n >> i) & 1ULL) {
                highest_bit = i;
                break;
            }
        }

        // Print binary representation from MSB to LSB
        for (int i = highest_bit; i >= 0; i--) {
            printf("%llu", (n >> i) & 1ULL);
        }
        printf("\n");
    }

    return 0;
}
