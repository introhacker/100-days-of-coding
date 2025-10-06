#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    printf("Enter a positive integer: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    printf("Factors of %lld:\n", n);
    long long i;
    long long limit = (long long) sqrt((double)n);
    for (i = 1; i <= limit; ++i) {
        if (n % i == 0) {
            printf("%lld ", i);
            if (i != n / i) printf("%lld ", n / i);
        }
    }
    printf("\n");
    return 0;
}
