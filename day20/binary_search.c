#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {4, 12, 23, 35, 47, 59, 68, 80};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    int index = binarySearch(arr, n, key);

    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found in the array.\n");

    return 0;
}
