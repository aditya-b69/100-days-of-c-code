#include <stdio.h>

int main() {
    char str1[100] = "Hello, ";
    char str2[50] = "World!";
    char copied[100];
    int i = 0, j = 0;

    printf("--- Day 29: String Copy & Concatenation ---\n");

    // Copy str1 to copied
    while (str1[i] != '\0') {
        copied[i] = str1[i];
        i++;
    }
    copied[i] = '\0';
    printf("Copied String: %s\n", copied);

    // Concatenate str2 into str1
    i = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated String: %s\n", str1);
    return 0;
}
