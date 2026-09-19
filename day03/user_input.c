#include <stdio.h>

int main() {
    int num1, num2;
    int sum, product;
    char operation_code;

    printf("--- Day 3: User Input with scanf ---\n");

    // Taking integer inputs
    printf("Enter two integers separated by space: ");
    scanf("%d %d", &num1, &num2);

    // Calculate sum and product
    sum = num1 + num2;
    product = num1 * num2;

    printf("Sum: %d + %d = %d\n", num1, num2, sum);
    printf("Product: %d * %d = %d\n", num1, num2, product);

    // Clear input buffer newline before reading character
    printf("Enter a one-letter status code (e.g., P for Pass, F for Fail): ");
    scanf(" %c", &operation_code);

    printf("Entered Status: %c\n", operation_code);

    return 0;
}
