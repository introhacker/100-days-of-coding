// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main()
{
    int length,breath,area,peri ; 
    printf("Enter the lenght and breath of the rectangle: ");
    scanf("%d %d" , &length , &breath);

    peri = (2*(length+breath));
    area = (length * breath);

    printf("The perimeter of the rectangle is: %d\n",peri);
    printf("The area of the rectangle is: %d\n",area);

    return 0;
}