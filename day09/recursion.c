#include <stdio.h>

// Recursive function to calculate factorial of n
long long factorial(int n) {
    // Base case
    if (n <= 1) {
        return 1;
    }
    // Recursive call
    return n * factorial(n - 1);
}

// Recursive function to calculate n-th Fibonacci number (0-indexed)
int fibonacci(int n) {
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;
    // Recursive call
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num = 6;
    int fibTerm = 7;

    printf("--- Day 9: Recursion in C ---\n");

    printf("Factorial of %d = %lld\n", num, factorial(num));

    printf("Fibonacci number at position %d = %d\n", fibTerm, fibonacci(fibTerm));

    // Print first 8 numbers in Fibonacci series
    printf("Fibonacci sequence (first 8 terms): ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
