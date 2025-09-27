// Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int odd = 2 * i - 1;
        sum += odd;
    }

    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}