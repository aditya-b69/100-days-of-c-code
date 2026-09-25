#include <stdio.h>

int main() {
    double a, b, c;

    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        // Triangle validity check: sum of two sides must be strictly greater than third
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c) {
                printf("Equilateral triangle\n");
            } else if (a == b || b == c || a == c) {
                printf("Isosceles triangle\n");
            } else {
                printf("Scalene triangle\n");
            }
        } else {
            printf("Not a valid triangle\n");
        }
    }

    return 0;
}
