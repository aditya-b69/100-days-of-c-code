#include <stdio.h>

int main() {
    double units;

    if (scanf("%lf", &units) == 1) {
        if (units < 0) {
            printf("Invalid units consumed\n");
            return 0;
        }

        double bill = 0.0;

        if (units <= 100) {
            bill = units * 5.0;
        } else if (units <= 200) {
            bill = (100 * 5.0) + ((units - 100) * 7.0);
        } else if (units <= 300) {
            bill = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0);
        } else {
            bill = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0);
        }

        printf("Total Bill = ₹%.2lf\n", bill);
    }

    return 0;
}
