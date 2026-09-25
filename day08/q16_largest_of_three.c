#include <stdio.h>

int main() {
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a >= b && a >= c) {
            printf("Largest = %.2lf\n", a);
        } else if (b >= a && b >= c) {
            printf("Largest = %.2lf\n", b);
        } else {
            printf("Largest = %.2lf\n", c);
        }
    }

    return 0;
}
