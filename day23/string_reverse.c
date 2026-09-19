#include <stdio.h>

int main() {
    char s[] = "Programming", r[50];
    int len = 0;
    while (s[len] != '\0') len++;
    for (int i = 0; i < len; i++) r[i] = s[len - 1 - i];
    r[len] = '\0';
    printf("Original: %s | Reversed: %s\n", s, r);
    return 0;
}
