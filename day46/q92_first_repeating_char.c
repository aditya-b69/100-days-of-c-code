#include <stdio.h>

int main() {
    char str[1005];

    if (scanf(" %[^\n]", str) == 1) {
        int freq[26] = {0};
        char repeating = '\0';

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                freq[str[i] - 'a']++;
                if (freq[str[i] - 'a'] == 2) {
                    repeating = str[i];
                    break;
                }
            }
        }

        if (repeating != '\0') {
            printf("%c\n", repeating);
        } else {
            printf("None\n");
        }
    }

    return 0;
}
