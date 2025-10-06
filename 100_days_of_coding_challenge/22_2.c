#include <stdio.h>

int main(void) {
    int n;

    printf("Enter number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. n must be a positive integer.\n");
        return 1;
    }

    double sum = 0.0;

    for (int k = 1; k <= n; ++k) {
        if (k == 1) {
            sum += 1.0; // first term
        } else {
            double num = 2.0 * k - 1.0;
            double den = 2.0 * k;
            sum += num / den;
        }
    }

    printf("Sum of first %d term(s) = %.6f\n", n, sum);
    return 0;
}
