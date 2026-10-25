#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1 && n > 0) {
        int matrix[n][n];
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &matrix[i][j]);
                if (i == j) {
                    sum += matrix[i][j];
                }
            }
        }

        printf("Diagonal Sum = %lld\n", sum);
    }

    return 0;
}
