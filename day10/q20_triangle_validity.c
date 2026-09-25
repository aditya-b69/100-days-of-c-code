#include <stdio.h>

int main() {
    double angle1, angle2, angle3;

    if (scanf("%lf %lf %lf", &angle1, &angle2, &angle3) == 3) {
        if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180.0)) {
            printf("Valid triangle\n");
        } else {
            printf("Not a valid triangle\n");
        }
    }

    return 0;
}
