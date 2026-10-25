#include <stdio.h>

int main() {
    long long a, b;

    if (scanf("%lld %lld", &a, &b) == 2) {
        long long orig_a = a, orig_b = b;

        // Find GCD first
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }

        long long gcd = (a < 0) ? -a : a;

        if (gcd == 0) {
            printf("LCM = 0\n");
        } else {
            long long lcm = (orig_a * orig_b) / gcd;
            if (lcm < 0) lcm = -lcm;
            printf("LCM = %lld\n", lcm);
        }
    }

    return 0;
}
