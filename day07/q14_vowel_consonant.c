#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    if (scanf(" %c", &ch) == 1) {
        char lower = tolower(ch);

        if (lower >= 'a' && lower <= 'z') {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                printf("%c is a vowel\n", ch);
            } else {
                printf("%c is a consonant\n", ch);
            }
        } else {
            printf("%c is not an alphabet\n", ch);
        }
    }

    return 0;
}
