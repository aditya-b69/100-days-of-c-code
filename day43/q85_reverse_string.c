#include <stdio.h>

int main() {
    char str[1005];

    if (scanf(" %[^\n]", str) == 1) {
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }

        int left = 0, right = len - 1;
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }

        printf("%s\n", str);
    }

    return 0;
}
