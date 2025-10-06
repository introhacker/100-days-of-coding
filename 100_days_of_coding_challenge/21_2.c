#include <stdio.h>

int main(void) {
    unsigned long long n;
    printf("Enter a positive integer: ");
    if (scanf("%llu", &n) != 1) return 1;

    if (n <= 1) {
        printf("%llu is not a perfect number\n", n);
        return 0;
    }

    unsigned long long sum = 1;
    unsigned long long limit = 1;


    while (limit * limit <= n)
        ++limit;
    --limit;

    for (unsigned long long i = 2; i <= limit; ++i) {
        if (n % i == 0) {
            unsigned long long j = n / i;
            if (i == j)
                sum += i;
            else
                sum += i + j;
        }
    }

    if (sum == n)
        printf("%llu is a perfect number\n", n);
    else
        printf("%llu is not a perfect number\n", n);

    return 0;
}
