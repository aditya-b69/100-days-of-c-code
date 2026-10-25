#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n < 0) {
            printf("Not a palindrome\n");
            return 0;
        }

        long long temp = n;
        long long reversed = 0;

        while (temp > 0) {
            reversed = (reversed * 10) + (temp % 10);
            temp /= 10;
        }

        if (reversed == n) {
            printf("Palindrome\n");
        } else {
            printf("Not a palindrome\n");
        }
    }

    return 0;
}
