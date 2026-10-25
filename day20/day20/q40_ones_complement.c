#include <stdio.h>

int main() {
    long long binary;

    if (scanf("%lld", &binary) == 1) {
        if (binary == 0) {
            printf("1\n");
            return 0;
        }

        long long temp = binary;
        long long complement = 0;
        long long place = 1;

        // Process each digit from right to left
        while (temp > 0) {
            int digit = temp % 10;
            int comp_digit = (digit == 0) ? 1 : 0;
            complement += comp_digit * place;
            place *= 10;
            temp /= 10;
        }

        printf("%lld\n", complement);
    }

    return 0;
}
