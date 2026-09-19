#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Writing to file
    fp = fopen("record.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    fprintf(fp, "1st Year C Programming Record Log\n");
    fclose(fp);

    // Reading from file
    fp = fopen("record.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("File content: %s", text);
    }
    fclose(fp);

    return 0;
}
