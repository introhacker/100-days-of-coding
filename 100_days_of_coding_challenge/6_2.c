// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the desired integer: ");
    scanf("%d",&a);

    if (a>0){
        printf("The integer is positive");
    }
    else if (a==0){
        printf("It's Zero");
    }
    else {
        printf("The integer is negative");
    }

    return 0;
}