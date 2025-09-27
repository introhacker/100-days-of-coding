#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter any no whose table u want to print : ");
    scanf("%d",&n);

    printf("Till where u want the table : ");
    scanf("%d",&a);

    for (int i=1;i<=a;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);

    }
return 0;
}