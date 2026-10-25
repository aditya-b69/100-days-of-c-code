#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n <= 0) {
            printf("Please enter a positive integer.\n");
            return 0;
        }

        long long sum = 0;
        long long current_odd = 1;

        for (long long i = 1; i <= n; i++) {
            sum += current_odd;
            current_odd += 2;
        }

        printf("Sum = %lld\n", sum);
    }

    return 0;
}
