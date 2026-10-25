#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n <= 0) {
            printf("Enter a positive integer.\n");
            return 0;
        }

        for (long long i = 1; i <= n; i++) {
            if (n % i == 0) {
                printf("%lld ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
