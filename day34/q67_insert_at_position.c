#include <stdio.h>

int main() {
    int n, pos, val;

    if (scanf("%d", &n) == 1 && n >= 0) {
        int arr[n + 1];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        scanf("%d %d", &pos, &val); // Assuming 0-based indexing

        if (pos < 0 || pos > n) {
            printf("Invalid position\n");
            return 0;
        }

        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = val;

        for (int i = 0; i <= n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
