#include <stdio.h>
int main()
{
char a;
int p=0,e=0,z=0;
int n;
a='Y';
while ((a=='Y')||(a=='y'))
{
    printf("Enter integers : ");
    scanf("%d",&n);

    if (n>0)
        p=p+1;
    else if(n<0)
        e=e+1;
    else
        z=z+1;
    printf("For entering more numbers press Y  : ");
    scanf(" %c",&a);
}
printf("Total no of positive no =%d\n",p);
printf("Total no of negative no =%d\n",n);
printf("Total no of zeros =%d\n",z);

return 0;

}
