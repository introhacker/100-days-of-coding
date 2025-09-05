// 4.	According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int main()
{
    int year, day, leapYears, totalDays;

    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate the number of leap years from 1 to (year-1)
    leapYears = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;

    // Total days from 01/01/0001 to 01/01/year
    totalDays = (year - 1) * 365 + leapYears;

    // Day of the week calculation (0=Monday, 1=Tuesday, ..., 6=Sunday)
    day = totalDays % 7;

    switch (day) {
        case 0:
            printf("01/01/%d is a Monday.\n", year);
            break;
        case 1:
            printf("01/01/%d is a Tuesday.\n", year);
            break;
        case 2:
            printf("01/01/%d is a Wednesday.\n", year);
            break;
        case 3:
            printf("01/01/%d is a Thursday.\n", year);
            break;
        case 4:
            printf("01/01/%d is a Friday.\n", year);
            break;
        case 5:
            printf("01/01/%d is a Saturday.\n", year);
            break;
        case 6:
            printf("01/01/%d is a Sunday.\n", year);
            break;
    }

    return 0;
}