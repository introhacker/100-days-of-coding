// Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>
int main()
{
float celsius,fahrenheit;
printf("Enter the temperature: ");
scanf("%f",&celsius);

fahrenheit = celsius*9/5 + 32;
printf("%f celsius is equal to %f fahrenheit",celsius,fahrenheit);

return 0;

}