#include <stdio.h>

int main() {
    int n;

    if (scanf("%d", &n) == 1 && n > 0) {
        int arr[n];
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }

        printf("%lld\n", sum);
    }

    return 0;
}
