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

        int diag_len = (rows < cols) ? rows : cols;
        int is_distinct = 1;

        for (int i = 0; i < diag_len; i++) {
            for (int j = i + 1; j < diag_len; j++) {
                if (matrix[i][i] == matrix[j][j]) {
                    is_distinct = 0;
                    break;
                }
            }
            if (!is_distinct) break;
        }

        if (is_distinct) {
            printf("Distinct\n");
        } else {
            printf("Not distinct\n");
        }
    }

    return 0;
}
