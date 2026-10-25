#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n < 2) {
            printf("No even numbers in the range 1 to %d\n", n);
            return 0;
        }

        long long product = 1;
        for (int i = 2; i <= n; i += 2) {
            product *= i;
        }

        printf("Product = %lld\n", product);
    }

    return 0;
}
