// Write a program to input an integer and check whether it is even or odd using if–else.

#include <stdio.h>
int main()
{
    int a;
    printf("Please enter the integer: ");
    scanf("%d",&a);

    if (a%2 == 0){
        printf("The integer is even");
    }
    else {
        printf("The integer is odd");
    }
    return 0;
}