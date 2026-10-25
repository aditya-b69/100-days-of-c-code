#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n < 0) {
            printf("Factorial of a negative number is undefined.\n");
            return 0;
        }

        unsigned long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }

        printf("%llu\n", fact);
    }

    return 0;
}
