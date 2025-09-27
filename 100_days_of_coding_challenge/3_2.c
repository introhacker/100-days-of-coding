// Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main()
{

int a,b,temp;
printf("Enter the two no.: ");
scanf("%d %d", &a,&b);

temp = a;
a = b;
b = temp;

printf("After Swap no. are: (%d,%d)",a,b);

return 0;

}