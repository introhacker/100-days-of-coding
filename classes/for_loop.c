// WAP to print 1  to 10 no. using a for loop first

#include <stdio.h>

int main()
{
    int n ;
    printf("Enter a number:\n");
    scanf("%d", &n);

for (int i = 1; i <= n; i++)
{
    printf("%d\n", i);
}
    return 0;
}