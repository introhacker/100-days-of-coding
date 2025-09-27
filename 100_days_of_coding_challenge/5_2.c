//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
    int s, h, m, sec;
    printf("Write the time in seconds: ");
    scanf("%d", &s);

    h = s / 3600;         
    m = (s % 3600) / 60;    
    sec = s % 60;           

    printf("The converted time is: %02d:%02d:%02d\n", h, m, sec);

    return 0;
}