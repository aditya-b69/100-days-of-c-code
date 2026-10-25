#include <stdio.h>

int main() {
    char str[1005];

    if (scanf(" %[^\n]", str) == 1) {
        int spaces = 0, digits = 0, special = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];
            if (ch == ' ') {
                spaces++;
            } else if (ch >= '0' && ch <= '9') {
                digits++;
            } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                // Alphabets ignored in this specific count
            } else {
                special++;
            }
        }

        printf("Spaces: %d\n", spaces);
        printf("Digits: %d\n", digits);
        printf("Special characters: %d\n", special);
    }

    return 0;
}
