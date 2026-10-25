#include <stdio.h>

int main() {
    long long n;

    if (scanf("%lld", &n) == 1) {
        if (n < 0) n = -n;

        int freq[10] = {0};

        if (n == 0) {
            freq[0]++;
        } else {
            while (n > 0) {
                int digit = n % 10;
                freq[digit]++;
                n /= 10;
            }
        }

        int max_freq = 0;
        int most_freq_digit = 0;

        for (int i = 0; i < 10; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
                most_freq_digit = i;
            }
        }

        printf("Most frequent digit: %d (Frequency: %d)\n", most_freq_digit, max_freq);
    }

    return 0;
}
