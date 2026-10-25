#include <stdio.h>

int main() {
    char str[1005];

    if (scanf(" %[^\n]", str) == 1) {
        int len = 0;
        while (str[len] != '\0') {
            len++;
        }

        int left = 0, right = len - 1;
        int isPalindrome = 1;

        while (left < right) {
            if (str[left] != str[right]) {
                isPalindrome = 0;
                break;
            }
            left++;
            right--;
        }

        if (isPalindrome) {
            printf("Palindrome\n");
        } else {
            printf("Not a palindrome\n");
        }
    }

    return 0;
}
