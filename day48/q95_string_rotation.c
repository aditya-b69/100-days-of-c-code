#include <stdio.h>
#include <string.h>

int main() {
    char s1[1005], s2[1005];

    if (scanf(" %[^\n]", s1) == 1 && scanf(" %[^\n]", s2) == 1) {
        int len1 = strlen(s1);
        int len2 = strlen(s2);

        if (len1 != len2) {
            printf("Not a rotation\n");
            return 0;
        }

        char temp[2010];
        strcpy(temp, s1);
        strcat(temp, s1);

        if (strstr(temp, s2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not a rotation\n");
        }
    }

    return 0;
}
