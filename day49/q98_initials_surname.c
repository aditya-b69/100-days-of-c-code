#include <stdio.h>
#include <ctype.h>

int main() {
    char name[200];

    if (scanf(" %[^\n]", name) == 1) {
        int i = 0;
        int last_space_index = -1;

        // Find the index of the last space separating the surname
        while (name[i] != '\0') {
            if (name[i] == ' ') {
                last_space_index = i;
            }
            i++;
        }

        if (last_space_index == -1) {
            // Only a single word entered
            printf("%s\n", name);
            return 0;
        }

        // Print initial of the first name
        i = 0;
        while (name[i] == ' ') i++;
        if (i < last_space_index) {
            printf("%c. ", toupper(name[i]));
        }

        // Print initials of any middle names
        while (i < last_space_index) {
            if (name[i] == ' ' && name[i + 1] != ' ' && (i + 1) < last_space_index) {
                printf("%c. ", toupper(name[i + 1]));
            }
            i++;
        }

        // Print the surname in full
        int k = last_space_index + 1;
        while (name[k] != '\0') {
            printf("%c", name[k]);
            k++;
        }
        printf("\n");
    }

    return 0;
}
