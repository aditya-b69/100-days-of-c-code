#include <stdio.h>

int main() {
    char op;
    int a, b;

    if (scanf(" %c %d %d", &op, &a, &b) == 3) {
        switch (op) {
            case '+':
                printf("Result = %d\n", a + b);
                break;
            case '-':
                printf("Result = %d\n", a - b);
                break;
            case '*':
                printf("Result = %d\n", a * b);
                break;
            case '/':
                if (b != 0) {
                    printf("Result = %d\n", a / b);
                } else {
                    printf("Error: Division by zero is undefined.\n");
                }
                break;
            case '%':
                if (b != 0) {
                    printf("Result = %d\n", a % b);
                } else {
                    printf("Error: Modulo by zero is undefined.\n");
                }
                break;
            default:
                printf("Error: Unsupported operator '%c'\n", op);
        }
    }

    return 0;
}
