#include <stdio.h>

int main() {
    int mat[2][2];

    printf("--- Day 31: 2x2 Matrix Determinant and Trace ---\n");
    printf("Enter 4 elements of 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int determinant = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    int trace = mat[0][0] + mat[1][1];

    printf("\nDeterminant: %d\n", determinant);
    printf("Trace (Sum of main diagonal): %d\n", trace);

    return 0;
}
