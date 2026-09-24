#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int initial_size = 3;
    int expanded_size = 6;

    printf("--- Day 39: Dynamic Memory with realloc ---\n");

    arr = (int *)malloc(initial_size * sizeof(int));
    if (arr == NULL) {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < initial_size; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Original array (size 3): ");
    for (int i = 0; i < initial_size; i++) printf("%d ", arr[i]);
    printf("\n");

    // Expand memory size to 6 elements
    arr = (int *)realloc(arr, expanded_size * sizeof(int));
    if (arr == NULL) {
        printf("Reallocation failed.\n");
        return 1;
    }

    for (int i = initial_size; i < expanded_size; i++) {
        arr[i] = (i + 1) * 10;
    }

    printf("Reallocated array (size 6): ");
    for (int i = 0; i < expanded_size; i++) printf("%d ", arr[i]);
    printf("\n");

    free(arr);
    return 0;
}
