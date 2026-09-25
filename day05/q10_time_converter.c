#include <stdio.h>

int main() {
    long long total_seconds;

    if (scanf("%lld", &total_seconds) == 1) {
        long long hours = total_seconds / 3600;
        long long minutes = (total_seconds % 3600) / 60;
        long long seconds = total_seconds % 60;

        printf("%02lld:%02lld:%02lld\n", hours, minutes, seconds);
    }

    return 0;
}
