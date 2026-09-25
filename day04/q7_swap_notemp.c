#include <stdio.h>

int main() {
    int a, b;

    if (scanf("%d %d", &a, &b) == 2) {
        printf("Before swap: a = %d, b = %d\n", a, b);

        a = a + b;
        b = a - b;
        a = a - b;

        printf("After swap: a = %d, b = %d\n", a, b);
    }

    return 0;
}
