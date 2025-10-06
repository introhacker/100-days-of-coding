// Write a program to calculate the factorial of a number.

#include <stdio.h>
int main()
{
    int n;
    printf("No. you want to find the factorial of: ");
    scanf("%d",&n);

    int product = 1;
    for (int i=1; i<=n ; i++){
        product *= i;
    }
    printf("Factorial of %d is: %d", n, product);

}