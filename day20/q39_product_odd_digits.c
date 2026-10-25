#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;

        long long product = 1;
        int foundOdd = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 != 0) {
                product *= digit;
                foundOdd = 1;
            }
            n /= 10;
        }

        if (foundOdd) {
            printf("%lld\n", product);
        } else {
            printf("No odd digits found\n");
        }
    }

    return 0;
}
