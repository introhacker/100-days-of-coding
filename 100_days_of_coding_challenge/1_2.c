#include <stdio.h>
int main()
{
    int a,b,sum,diff,product,quotient;
    printf("Entre the first number: ");
    scanf("%d",&a);
    printf("Entre the second number: ");
    scanf("%d",&b);
    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;

    printf("The sum of %d and %d is %d\n",a,b,sum);
    printf("The diff of %d and %d is %d\n",a,b,diff);
    printf("The product  of %d and %d is %d\n",a,b,product);
    printf("The quotient of %d and %d is %d\n",a,b,quotient);
    return 0;
}