// Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main()
{
int n,i,sum = 0;
printf("Enter the range till where you want to print the sum of natural no.: ");
scanf("%d",&n);

for (i=1;i<=n;i++) { 
        sum += i;}

printf("The sum of first %d natural no. is %d",n,sum);

}