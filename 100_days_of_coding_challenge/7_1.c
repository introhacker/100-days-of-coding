// Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include <stdio.h>
int main()
{
    int year;
printf("Enter the no. you want to cheack: ");
scanf("%d",&year);

if (year%4 == 0){
    printf("The year is a leap year");
}
else {
    printf("The year is not a leap year");
}

return 0;
}