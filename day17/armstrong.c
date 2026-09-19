#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Calculate sum of power of individual digits
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
