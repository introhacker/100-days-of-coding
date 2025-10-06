#include <stdio.h>

unsigned long long factorials[10];

void init_factorials(void) {
    factorials[0] = 1;
    for (int i = 1; i < 10; ++i)
        factorials[i] = factorials[i - 1] * i;
}

int main(void) {
    long long n;

    printf("Enter a nonnegative integer: ");
    if (scanf("%lld", &n) != 1 || n < 0) {
        printf("Invalid input\n");
        return 1;
    }

    init_factorials();

    unsigned long long num = (n < 0) ? -n : n; 
    unsigned long long sum = 0;
    unsigned long long temp = num;

    if (num == 0)
        sum = factorials[0];

    while (temp > 0) {
        int d = temp % 10;
        sum += factorials[d];
        temp /= 10;
        if (sum > num)
            break;
    }

    if (sum == num)
        printf("%llu is a strong number\n", num);
    else
        printf("%llu is not a strong number\n", num);

    return 0;
}
