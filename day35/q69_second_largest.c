#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1) {
        if (n < 2) {
            printf("Array must contain at least two elements\n");
            return 0;
        }

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int largest = INT_MIN;
        int second_largest = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                second_largest = largest;
                largest = arr[i];
            } else if (arr[i] > second_largest && arr[i] != largest) {
                second_largest = arr[i];
            }
        }

        if (second_largest == INT_MIN) {
            printf("No distinct second largest element found\n");
        } else {
            printf("Second largest: %d\n", second_largest);
        }
    }

    return 0;
}
