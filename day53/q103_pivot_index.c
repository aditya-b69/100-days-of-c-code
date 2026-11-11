#include <stdio.h>

int findPivotIndex(int nums[], int n) {
    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        total_sum += nums[i];
    }

    long long left_sum = 0;
    for (int i = 0; i < n; i++) {
        long long right_sum = total_sum - left_sum - nums[i];
        if (left_sum == right_sum) {
            return i;
        }
        left_sum += nums[i];
    }

    return -1;
}

int main() {
    int n;
    if (scanf("%d", &n) == 1 && n > 0) {
        int nums[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
        }

        int pivot = findPivotIndex(nums, n);
        printf("%d\n", pivot);
    }
    return 0;
}
