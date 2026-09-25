#include <stdio.h>

int main() {
    int a, b, temp;

    if (scanf("%d %d", &a, &b) == 2) {
        printf("Before swap: a = %d, b = %d\n", a, b);

        temp = a;
        a = b;
        b = temp;

        printf("After swap: a = %d, b = %d\n", a, b);
    }

    return 0;
}
