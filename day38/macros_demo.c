#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    double radius = 7.0;
    int num1 = 15, num2 = 25;

    printf("--- Day 38: Preprocessor Directives ---\n");
    printf("Circle Radius: %.2f\n", radius);
    printf("Circle Area (PI * r^2): %.2f\n", PI * SQUARE(radius));

    printf("Square of %d: %d\n", num1, SQUARE(num1));
    printf("Maximum of %d and %d: %d\n", num1, num2, MAX(num1, num2));

    return 0;
}
