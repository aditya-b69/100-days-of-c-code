#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int *arr;

    printf("--- Day 28: Dynamic Memory Allocation ---\n");

    // Allocating memory using malloc
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Populate and display elements
    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Dynamically allocated array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);
    printf("Memory successfully deallocated.\n");

    return 0;
}
