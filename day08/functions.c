#include <stdio.h>
#include <stdbool.h>

// Function Declarations (Prototypes)
void printBanner(void);
int findMax(int a, int b);
bool isPrime(int n);

int main() {
    printBanner();

    int x = 25, y = 42;
    int maxVal = findMax(x, y);
    printf("The maximum between %d and %d is: %d\n\n", x, y, maxVal);

    int testNum = 29;
    if (isPrime(testNum)) {
        printf("%d is a prime number.\n", testNum);
    } else {
        printf("%d is not a prime number.\n", testNum);
    }

    return 0;
}

// Function Definitions

// 1. Function with no parameters and no return value
void printBanner(void) {
    printf("===============================\n");
    printf("  Day 08: Functions in C\n");
    printf("===============================\n\n");
}

// 2. Function with parameters and an int return value
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

// 3. Function checking primality returning a boolean
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
