#include <stdio.h>

int main() {
    long long a, b;

    if (scanf("%lld %lld", &a, &b) == 2) {
        // Euclidean Algorithm using loops
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }

        if (a < 0) a = -a;
        printf("HCF = %lld\n", a);
    }

    return 0;
}
