#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) == 2 && rows > 0 && cols > 0) {
        int matrix[rows][cols];
        long long row_sums[rows];

        for (int i = 0; i < rows; i++) {
            row_sums[i] = 0;
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
                row_sums[i] += matrix[i][j];
            }
        }

        for (int i = 0; i < rows; i++) {
            printf("%lld ", row_sums[i]);
        }
        printf("\n");
    }

    return 0;
}
