#include <stdio.h>

int main() {
    double cp, sp;

    if (scanf("%lf %lf", &cp, &sp) == 2) {
        if (cp <= 0) {
            printf("Cost price must be greater than zero.\n");
            return 0;
        }

        if (sp > cp) {
            double profit = sp - cp;
            double profit_percent = (profit / cp) * 100.0;
            printf("Profit: %.2lf (%.2lf%%)\n", profit, profit_percent);
        } else if (cp > sp) {
            double loss = cp - sp;
            double loss_percent = (loss / cp) * 100.0;
            printf("Loss: %.2lf (%.2lf%%)\n", loss, loss_percent);
        } else {
            printf("No Profit, No Loss\n");
        }
    }

    return 0;
}
