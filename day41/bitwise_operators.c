#include <stdio.h>

void printBinary(unsigned char num) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char a = 12; // Binary: 00001100
    unsigned char b = 25; // Binary: 00011001

    printf("--- Day 41: Bitwise Operators & Manipulation ---\n");
    printf("a = %d -> Binary: ", a);
    printBinary(a);

    printf("b = %d -> Binary: ", b);
    printBinary(b);

    printf("\nBitwise Operations:\n");
    printf("a & b (AND) : %d -> ", a & b);
    printBinary(a & b);

    printf("a | b (OR)  : %d -> ", a | b);
    printBinary(a | b);

    printf("a ^ b (XOR) : %d -> ", a ^ b);
    printBinary(a ^ b);

    printf("~a (NOT)    : %d -> ", (unsigned char)~a);
    printBinary(~a);

    printf("a << 1 (Left Shift)  : %d -> ", (unsigned char)(a << 1));
    printBinary(a << 1);

    printf("a >> 1 (Right Shift) : %d -> ", a >> 1);
    printBinary(a >> 1);

    return 0;
}
