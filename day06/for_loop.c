#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("--- Day 6: For Loop Basics ---\n");
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Multiplication Table
    printf("\nMultiplication Table of %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    // Calculating Sum from 1 to N
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("\nSum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
