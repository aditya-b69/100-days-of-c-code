#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        if (a == 0.0) {
            printf("Linear equation, not quadratic.\n");
            return 0;
        }

        double d = (b * b) - (4.0 * a * c);

        if (d > 0.0) {
            double r1 = (-b + sqrt(d)) / (2.0 * a);
            double r2 = (-b - sqrt(d)) / (2.0 * a);
            printf("Real and distinct roots: %.2lf, %.2lf\n", r1, r2);
        } else if (d == 0.0) {
            double r = -b / (2.0 * a);
            printf("Real and equal roots: %.2lf, %.2lf\n", r, r);
        } else {
            double realPart = -b / (2.0 * a);
            double imagPart = sqrt(-d) / (2.0 * a);
            printf("Complex roots: %.2lf + %.2lfi, %.2lf - %.2lfi\n", realPart, imagPart, realPart, imagPart);
        }
    }

    return 0;
}
