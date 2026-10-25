#include <stdio.h>

int main() {
    char sentence[1005];

    if (scanf(" %[^\n]", sentence) == 1) {
        int max_len = 0, current_len = 0;
        int max_start = 0, current_start = 0;
        int i = 0;

        while (1) {
            if (sentence[i] != ' ' && sentence[i] != '\0') {
                if (current_len == 0) {
                    current_start = i;
                }
                current_len++;
            } else {
                if (current_len > max_len) {
                    max_len = current_len;
                    max_start = current_start;
                }
                current_len = 0;
            }

            if (sentence[i] == '\0') break;
            i++;
        }

        for (int k = max_start; k < max_start + max_len; k++) {
            printf("%c", sentence[k]);
        }
        printf("\n");
    }

    return 0;
}
