#include <stdio.h>

enum Weekday {
    SUNDAY = 1,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Weekday today = WEDNESDAY;

    printf("--- Day 36: Enumerations in C ---\n");
    printf("Selected Day Value: %d\n", today);

    switch (today) {
        case SUNDAY:
        case SATURDAY:
            printf("Status: Weekend!\n");
            break;
        case MONDAY:
        case TUESDAY:
        case WEDNESDAY:
        case THURSDAY:
        case FRIDAY:
            printf("Status: Mid-week working day.\n");
            break;
        default:
            printf("Invalid day.\n");
    }

    return 0;
}
