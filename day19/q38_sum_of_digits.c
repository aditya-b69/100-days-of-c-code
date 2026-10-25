#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;

        long long sum = 0;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }

        printf("Sum of digits = %lld\n", sum);
    }

    return 0;
}
