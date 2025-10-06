#include <stdio.h>

int main(void) {
    long long num;

    printf("Enter an integer: ");
    if (scanf("%lld", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int count[10] = {0};

    if (num == 0) {
        count[0] = 1;
    }

    
    long long n = (num < 0) ? -num : num;

    while (n > 0) {
        int digit = n % 10;
        ++count[digit];
        n /= 10;
    }

    int max_count = -1;
    int most_frequent_digit = 0;

    for (int d = 0; d <= 9; ++d) {
        if (count[d] > max_count) {
            max_count = count[d];
            most_frequent_digit = d;
        }
    }

    printf("Most frequent digit: %d\n", most_frequent_digit);
    printf("Number of occurrences: %d\n", max_count);

    return 0;
}
