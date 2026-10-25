#include <stdio.h>

int main() {
    char str[1005];

    if (scanf(" %[^\n]", str) == 1) {
        int j = 0;
        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];
            char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;

            if (lower != 'a' && lower != 'e' && lower != 'i' && lower != 'o' && lower != 'u') {
                str[j++] = str[i];
            }
        }
        str[j] = '\0';

        printf("%s\n", str);
    }

    return 0;
}
