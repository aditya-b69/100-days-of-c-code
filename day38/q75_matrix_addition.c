#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) == 2 && rows > 0 && cols > 0) {
        int a[rows][cols], b[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", a[i][j] + b[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
