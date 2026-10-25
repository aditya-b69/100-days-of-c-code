#include <stdio.h>

int main() {
    char str1[1005], str2[1005];

    if (scanf(" %[^\n]", str1) == 1 && scanf(" %[^\n]", str2) == 1) {
        int count[256] = {0};

        for (int i = 0; str1[i] != '\0'; i++) {
            count[(unsigned char)str1[i]]++;
        }
        for (int i = 0; str2[i] != '\0'; i++) {
            count[(unsigned char)str2[i]]--;
        }

        int isAnagram = 1;
        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }

        if (isAnagram) {
            printf("Anagrams\n");
        } else {
            printf("Not anagrams\n");
        }
    }

    return 0;
}
