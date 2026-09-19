#include <stdio.h>

int main() {
    int number, original, remainder;
    int reversed = 0;
    int choice;

    printf("--- Day 7: While & Do-While Loops ---\n");

    // while loop: Reverse an integer
    printf("Enter an integer to reverse: ");
    scanf("%d", &number);
    original = number;

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    printf("Original: %d | Reversed: %d\n\n", original, reversed);

    // do-while loop: Runs at least once, repeats until valid input is given
    do {
        printf("Menu:\n");
        printf("1. Run again\n");
        printf("2. Exit\n");
        printf("Enter choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice != 1 && choice != 2) {
            printf("Invalid selection! Please enter 1 or 2.\n\n");
        }
    } while (choice != 1 && choice != 2);

    printf("Exiting program. Goodbye!\n");
    return 0;
}
