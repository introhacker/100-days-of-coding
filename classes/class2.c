// A code to enter 2 values x and y and cheack if 3 conditions are meet. Print correct if 1st condition is meet.

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);

   
    if ((x > 5 && y > 5) && (x >= 5 || y >= 5))
    {
        printf("Correct");
    }
    else
    {
        printf("Conditions not met");
    }
    return 0;
}