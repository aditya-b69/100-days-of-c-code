#include <stdio.h>

void reverseSubstr(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[1005];

    if (scanf(" %[^\n]", sentence) == 1) {
        int word_start = 0;
        int i = 0;

        while (sentence[i] != '\0') {
            if (sentence[i] == ' ') {
                reverseSubstr(sentence, word_start, i - 1);
                word_start = i + 1;
            }
            i++;
        }
        reverseSubstr(sentence, word_start, i - 1);

        printf("%s\n", sentence);
    }

    return 0;
}
