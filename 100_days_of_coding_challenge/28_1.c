#include <stdio.h>

#define MAX 10000 
int main(void) {
    int n;

    printf("Enter a positive integer n (up to %d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) {
        printf("Invalid input. Please enter a positive integer up to %d.\n", MAX);
        return 1;
    }

    if (n < 2) {
        printf("There are no prime numbers between 1 and %d.\n", n);
        return 0;
    }

    int is_prime[MAX + 1];
    for (int i = 0; i <= n; ++i)
        is_prime[i] = 1;

    is_prime[0] = is_prime[1] = 0;

    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int multiple = p * p; multiple <= n; multiple += p)
                is_prime[multiple] = 0;
        }
    }

    printf("Prime numbers between 1 and %d:\n", n);
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i])
            printf("%d ", i);
    }

    putchar('\n');
    return 0;
}
