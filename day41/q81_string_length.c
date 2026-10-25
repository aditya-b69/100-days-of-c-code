#include <stdio.h>

int main() {
    char str[1005];

    if (scanf(" %[^\n]", str) == 1) {
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        printf("Length: %d\n", length);
    }

    return 0;
}
