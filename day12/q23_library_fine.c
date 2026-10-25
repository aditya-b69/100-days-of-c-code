#include <stdio.h>

int main() {
    int days;

    if (scanf("%d", &days) == 1) {
        if (days <= 0) {
            printf("No fine\n");
        } else if (days <= 5) {
            int fine = days * 2;
            printf("Fine: ₹%d\n", fine);
        } else if (days <= 10) {
            int fine = (5 * 2) + ((days - 5) * 4);
            printf("Fine: ₹%d\n", fine);
        } else if (days <= 30) {
            int fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
            printf("Fine: ₹%d\n", fine);
        } else {
            printf("Membership Cancelled\n");
        }
    }

    return 0;
}
