#include <stdio.h>

int main() {
    for (int i = 5; i >= 1; i--) {
        // Print leading spaces for alignment
        for (int space = 1; space < i; space++) {
            printf(" ");
        }
        // Print digits from i up to 5
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
