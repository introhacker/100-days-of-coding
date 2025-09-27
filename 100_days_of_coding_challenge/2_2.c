// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
int radius;
printf("Enter the radius ");
scanf("%d",&radius);

float pi = 3.14159;
float area, circumference;
area = pi * radius * radius;
circumference = 2 * pi * radius;

printf("The area of the circle is: %f\n",area);
printf("The circumfrence of the circe is: %f\n",circumference);

return 0;

}