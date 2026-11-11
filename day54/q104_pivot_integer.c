#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    if (scanf("%lld", &n) == 1) {
        // Sum(1 to x) = Sum(x to n) => x^2 = n * (n + 1) / 2
        long long total = n * (n + 1) / 2;
        long long x = (long long)sqrt(total);

        if (x * x == total) {
            printf("%lld\n", x);
        } else {
            printf("-1\n");
        }
    }
    return 0;
}
