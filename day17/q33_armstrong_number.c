ˇ#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n < 0) {
            printf("Not an Armstrong number\n");
            return 0;
        }

        long long temp = n;
        int digits = 0;

        // Count number of digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        if (digits == 0) digits = 1;

        temp = n;
        long long sum = 0;

        while (temp > 0) {
            int rem = temp % 10;
            long long p = 1;
            for (int i = 0; i < digits; i++) {
                p *= rem;
            }
            sum += p;
            temp /= 10;
        }

        if (sum == n) {
            printf("Armstrong number\n");
        } else {
            printf("Not an Armstrong number\n");
        }
    }

    return 0;
}
