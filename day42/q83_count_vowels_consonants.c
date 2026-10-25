#include <stdio.h>

int main() {
    char str[1005];

    if (scanf(" %[^\n]", str) == 1) {
        int vowels = 0, consonants = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            char ch = str[i];

            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                // Lowercase conversion manually without ctype.h
                char lower = (ch >= 'A' && ch <= 'Z') ? (ch + 32) : ch;

                if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        printf("Vowels: %d\n", vowels);
        printf("Consonants: %d\n", consonants);
    }

    return 0;
}
