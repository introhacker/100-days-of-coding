#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }
    long long num = llabs(n);
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits of %lld = %d\n", n, sum);
    return 0;
}
