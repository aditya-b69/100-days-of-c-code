#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        int isNegative = 0;
        if (n < 0) {
            isNegative = 1;
            n = -n;
        }

        if (n < 10) {
            printf("%lld\n", isNegative ? -n : n);
            return 0;
        }

        int last_digit = n % 10;
        long long temp = n;
        long long place = 1;

        while (temp >= 10) {
            place *= 10;
            temp /= 10;
        }

        int first_digit = temp;
        long long middle = (n % place) / 10;
        long long swapped = (last_digit * place) + (middle * 10) + first_digit;

        if (isNegative) {
            swapped = -swapped;
        }

        printf("%lld\n", swapped);
    }

    return 0;
}
