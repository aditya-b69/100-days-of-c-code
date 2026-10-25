#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n <= 0) {
            printf("0.00\n");
            return 0;
        }

        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            double num = 2.0 * i;
            double den = (4.0 * i) - 1.0;
            sum += (num / den);
        }

        printf("Sum = %.2lf\n", sum);
    }

    return 0;
}
