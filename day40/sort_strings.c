#include <stdio.h>
#include <string.h>

int main() {
    char names[5][50] = {"Rohan", "Aman", "Priya", "Kavya", "Deepak"};
    char temp[50];
    int n = 5;

    printf("--- Day 40: Alphabetical String Sorting ---\n");

    // Bubble sort comparison across string rows
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    printf("Names in Alphabetical Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}
