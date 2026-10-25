#include <stdio.h>

int main() {
    long long n, reversed = 0;

    if (scanf("%lld", &n) == 1) {
        int isNegative = 0;
        if (n < 0) {
            isNegative = 1;
            n = -n;
        }

        while (n > 0) {
            reversed = (reversed * 10) + (n % 10);
            n /= 10;
        }

        if (isNegative) {
            reversed = -reversed;
        }

        printf("%lld\n", reversed);
    }

    return 0;
}
