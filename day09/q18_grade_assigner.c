#include <stdio.h>

int main() {
    double percent;

    if (scanf("%lf", &percent) == 1) {
        if (percent < 0.0 || percent > 100.0) {
            printf("Invalid percentage\n");
        } else if (percent >= 90.0) {
            printf("Grade A\n");
        } else if (percent >= 80.0) {
            printf("Grade B\n");
        } else if (percent >= 70.0) {
            printf("Grade C\n");
        } else if (percent >= 60.0) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    }

    return 0;
}
