#include <stdio.h>

int main() {
    int n, pos;

    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &pos); // Assuming 0-based index to delete

        if (pos < 0 || pos >= n) {
            printf("Invalid index\n");
            return 0;
        }

        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        for (int i = 0; i < n - 1; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
