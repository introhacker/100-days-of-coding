/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include <stdio.h>
int main()
{
int per;
printf("Please enter the student percentage: ");
scanf("%d",&per);

if (per>=90 && per<=100){
    printf("Grade A");
}
else if (per>=80 && per<=89)
{
    printf("Grade B");
}
else if (per>=70 && per<=79)
{
    printf("Grade C");
}
else if (per>=60 && per<=69)
{
    printf("Grade D");
}
else if (per<60 && per>=0)
{
    printf("The student has failed the examination");
}
else{
    printf("Please enter a valid percentage");
}

return 0;
}