#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        int positive = 0, negative = 0, zeros = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] > 0) {
                positive++;
            } else if (arr[i] < 0) {
                negative++;
            } else {
                zeros++;
            }
        }

        printf("Positive: %d\n", positive);
        printf("Negative: %d\n", negative);
        printf("Zero: %d\n", zeros);
    }

    return 0;
}
