#include <stdio.h>

int main() {
    int number;

    printf("--- Day 4: Conditional Statements (if-else) ---\n");
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("%d is a positive number.\n", number);
    } else if (number < 0) {
        printf("%d is a negative number.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    // Nested/secondary check for even or odd
    if (number != 0) {
        if (number % 2 == 0) {
            printf("%d is even.\n", number);
        } else {
            printf("%d is odd.\n", number);
        }
    }

    return 0;
}
