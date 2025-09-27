// Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three no.");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c){
        printf("The %d is the largest",a);
    }
    else if (b>a && b>c){
        printf("The %d is the largest",b);
    }
else {
    printf("The %d is the largest",c);
}

return 0;
}
