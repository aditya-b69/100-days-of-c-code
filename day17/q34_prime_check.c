#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n <= 1) {
            printf("Not prime\n");
            return 0;
        }

        int isPrime = 1;
        for (long long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }

    return 0;
}
