#include <stdio.h>

int main() {
    char str[1005];

    if (scanf(" %[^\n]", str) == 1) {
        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ') {
                str[i] = '-';
            }
        }

        printf("%s\n", str);
    }

    return 0;
}
