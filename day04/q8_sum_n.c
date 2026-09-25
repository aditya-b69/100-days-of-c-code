#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n >= 1) {
            long long sum = (n * (n + 1)) / 2;
            printf("Sum = %lld\n", sum);
        } else {
            printf("Please enter a positive natural number.\n");
        }
    }

    return 0;
}
