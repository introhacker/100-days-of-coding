// WAP to cheack if a number is even or odd amd greater than or less than 10

#include <stdio.h>

int main()
{
    int num;
printf("Enter a number: ");
scanf("%d", &num);

    if (num % 2 == 0 && num > 10)
    {
        printf("The number is even and greater than 10");
    }
    else if (num % 2 == 0 && num < 10)
    {
        printf("The number is even and less than 10");
    }
    else if (num % 2 != 0 && num > 10)
    {
        printf("The number is odd and greater than 10");
    }
    else
    {
        printf("The number is odd and less than 10");
    }

    return 0;

}