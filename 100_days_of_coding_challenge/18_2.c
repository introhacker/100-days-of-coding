#include <stdio.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    if (a < 0) a = llabs(a);
    if (b < 0) b = llabs(b);
    while (b != 0) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main(void) {
    long long x, y;
    printf("Enter two integers: ");
    if (scanf("%lld %lld", &x, &y) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    long long result = gcd(x, y);
    if (result == 0)
        printf("GCD is undefined for both inputs zero\n");
    else
        printf("GCD(%lld, %lld) = %lld\n", x, y, result);
    return 0;
}
