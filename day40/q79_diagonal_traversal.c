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

        // Traverse diagonally across each possible sum (i + j)
        for (int sum = 0; sum <= (rows + cols - 2); sum++) {
            for (int i = 0; i < rows; i++) {
                int j = sum - i;
                if (j >= 0 && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
        printf("\n");
    }

    return 0;
}
