#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];

    if (scanf(" %[^\n]", name) == 1) {
        int i = 0;

        // Skip leading spaces
        while (name[i] == ' ') i++;

        if (name[i] != '\0') {
            printf("%c", toupper(name[i]));
        }

        while (name[i] != '\0') {
            if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
                printf(".%c", toupper(name[i + 1]));
            }
            i++;
        }
        printf(".\n");
    }

    return 0;
}
