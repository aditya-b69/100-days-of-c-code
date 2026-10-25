#include <stdio.h>

int main() {
    char str[1005];
    char target;

    if (scanf(" %[^\n]", str) == 1) {
        if (scanf(" %c", &target) == 1) {
            int count = 0;
            for (int i = 0; str[i] != '\0'; i++) {
                if (str[i] == target) {
                    count++;
                }
            }
            printf("Frequency of '%c': %d\n", target, count);
        }
    }

    return 0;
}
