#include <stdio.h>

int main() {
    int n = 3;
    int a[3][3] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };
    int isSymmetric = 1;

    printf("--- Day 34: Symmetric Matrix Check ---\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) break;
    }

    if (isSymmetric)
        printf("The matrix is Symmetric (A = A^T).\n");
    else
        printf("The matrix is Not Symmetric.\n");

    return 0;
}
