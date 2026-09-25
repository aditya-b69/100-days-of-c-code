#include <stdio.h>

#define PI 3.141592653589793

int main() {
    double radius;

    if (scanf("%lf", &radius) == 1) {
        double area = PI * radius * radius;
        double circumference = 2 * PI * radius;

        printf("Area = %.2lf\n", area);
        printf("Circumference = %.2lf\n", circumference);
    }

    return 0;
}
