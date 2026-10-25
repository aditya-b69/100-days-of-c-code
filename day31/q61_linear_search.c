#include <stdio.h>

int main() {
    int n, key;

    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &key);

        int found_index = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                found_index = i;
                break;
            }
        }

        if (found_index != -1) {
            printf("Found at index %d\n", found_index);
        } else {
            printf("Not found\n");
        }
    }

    return 0;
}
