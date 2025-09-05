// WAP to print a program such that it prints you can go if you are above 18 and prints you are not eligible if you are under 18

# include <stdio.h>

int main ()

{
int age;
    printf("Enter your age:\n ");
    scanf("%d",&age);

if (age>=18)
{
    printf("You can go");
}
else
{
    printf("You are not eligible");

    return 0;


}
}