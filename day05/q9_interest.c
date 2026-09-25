#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;

    if (scanf("%lf %lf %lf", &principal, &rate, &time) == 3) {
        double simple_interest = (principal * rate * time) / 100.0;
        double amount = principal * pow((1.0 + (rate / 100.0)), time);
        double compound_interest = amount - principal;

        printf("Simple Interest = %.2lf\n", simple_interest);
        printf("Compound Interest = %.2lf\n", compound_interest);
    }

    return 0;
}
