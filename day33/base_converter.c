#include <stdio.h>

void convertDecimal(int num) {
    int binary[32];
    int octal[32];
    int temp = num, bIndex = 0, oIndex = 0;

    // Convert to Binary
    while (temp > 0) {
        binary[bIndex++] = temp % 2;
        temp /= 2;
    }

    // Convert to Octal
    temp = num;
    while (temp > 0) {
        octal[oIndex++] = temp % 8;
        temp /= 8;
    }

    printf("Binary: ");
    for (int i = bIndex - 1; i >= 0; i--) printf("%d", binary[i]);
    printf("\n");

    printf("Octal:  ");
    for (int i = oIndex - 1; i >= 0; i--) printf("%d", octal[i]);
    printf("\n");
}

int main() {
    int num;
    printf("--- Day 33: Number System Converter ---\n");
    printf("Enter a positive decimal number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\nOctal:  0\n");
    } else {
        convertDecimal(num);
    }

    return 0;
}
