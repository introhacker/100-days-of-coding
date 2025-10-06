#include <stdio.h>

int main(void) {
    int n;

    printf("Enter the number of terms: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    double sum = 0.0;

    for (int k = 1; k <= n; ++k) {
        double numerator = 2.0 * k;
        double denominator = 4.0 * k - 1.0; 
        sum += numerator / denominator;
    }

    printf("The sum of the first %d term(s) is: %.6f\n", n, sum);
    return 0;
}
