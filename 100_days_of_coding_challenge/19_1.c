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
    long long a, b;
    printf("Enter two integers: ");
    if (scanf("%lld %lld", &a, &b) != 2) {
        printf("Invalid input\n");
        return 1;
    }
    if (a == 0 && b == 0) {
        printf("LCM is undefined for both inputs zero\n");
        return 0;
    }
    long long g = gcd(a, b);
    long long lcm = llabs(a / (g == 0 ? 1 : g) * b);
    printf("LCM(%lld, %lld) = %lld\n", a, b, lcm);
    return 0;
}
