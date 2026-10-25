#include <stdio.h>

int main() {
    int rows, cols;

    if (scanf("%d %d", &rows, &cols) == 2 && rows > 0 && cols > 0) {
        int matrix[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        if (rows != cols) {
            printf("Not symmetric\n");
            return 0;
        }

        int is_symmetric = 1;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    is_symmetric = 0;
                    break;
                }
            }
            if (!is_symmetric) break;
        }

        if (is_symmetric) {
            printf("Symmetric\n");
        } else {
            printf("Not symmetric\n");
        }
    }

    return 0;
}
