#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ansIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            ansIndex = mid;
            high = mid - 1; // Look for first occurrence / smaller valid index
        } else {
            low = mid + 1;
        }
    }
    return ansIndex;
}

int main() {
    int n, x;
    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &x);

        int index = findCeilIndex(arr, n, x);
        printf("%d\n", index);
    }
    return 0;
}
