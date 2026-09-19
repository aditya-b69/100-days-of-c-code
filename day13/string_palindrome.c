#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    scanf(" %99[^\n]", str);

    // Calculate length manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of string: %d\n", length);

    // Check Palindrome
    int isPalindrome = 1;
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("\"%s\" is a palindrome.\n", str);
    else
        printf("\"%s\" is not a palindrome.\n", str);

    return 0;
}
