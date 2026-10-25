#include <stdio.h>

int main() {
    int n, key;

    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        scanf("%d", &key);

        int low = 0, high = n - 1, found_index = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == key) {
                found_index = mid;
                break;
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
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
