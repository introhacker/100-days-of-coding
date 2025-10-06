// Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

int sum =0;
    for (int i =1 ; i <=n ; i++){
        int even = 2 * i;
        sum += even;
    }
    printf("Sum of first %d even4 numbers is: %d\n", n, sum);

    return 0;
}
