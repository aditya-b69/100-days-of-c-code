#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n <= 0) {
            printf("Not a strong number\n");
            return 0;
        }

        long long temp = n;
        long long sum = 0;

        while (temp > 0) {
            int digit = temp % 10;
            long long fact = 1;
            for (int i = 1; i <= digit; i++) {
                fact *= i;
            }
            sum += fact;
            temp /= 10;
        }

        if (sum == n) {
            printf("Strong number\n");
        } else {
            printf("Not a strong number\n");
        }
    }

    return 0;
}
