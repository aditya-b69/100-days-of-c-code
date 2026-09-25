#include <stdio.h>

int main() {
    double length, breadth;

    if (scanf("%lf %lf", &length, &breadth) == 2) {
        double area = length * breadth;
        double perimeter = 2 * (length + breadth);

        printf("Area = %.2lf\n", area);
        printf("Perimeter = %.2lf\n", perimeter);
    }

    return 0;
}
