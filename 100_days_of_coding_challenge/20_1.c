#include <stdio.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 1;

    // Manual absolute value conversion
    unsigned long long num = (n < 0) ? -n : n;

    unsigned long long product = 1;
    int found = 0;

    if (num == 0) {
        // This block is logically unnecessary but kept for clarity
        if (0 % 2 == 1) {
            product *= 0;
            found = 1;
        }
    }

    while (num > 0) {
        int d = num % 10;
        if (d % 2 != 0) {
            product *= d;
            found = 1;
        }
        num /= 10;
    }

    if (found)
        printf("Product of odd digits of %lld = %llu\n", n, product);
    else
        printf("No odd digits in %lld\n", n);

    return 0;
}
