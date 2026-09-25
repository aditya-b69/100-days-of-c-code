#include <stdio.h>

int main() {
    double a, b;

    if (scanf("%lf %lf", &a, &b) == 2) {
        printf("Sum = %.2lf\n", a + b);
        printf("Difference = %.2lf\n", a - b);
        printf("Product = %.2lf\n", a * b);

        if (b != 0.0) {
            printf("Quotient = %.2lf\n", a / b);
        } else {
            printf("Quotient = Error: Division by zero is undefined.\n");
        }
    }

    return 0;
}
