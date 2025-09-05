// According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include <stdio.h>

int main()
{

    int year, d, m, y, x, day;
    printf("Enter the year: ");
    scanf("%d", &year);

    d = 1;
    m = 1;
    y = year - 1;

    x = y + (y / 4) - (y / 100) + (y / 400);
    day = (d + (13 * (m + 1)) / 5 + x) % 7;

    switch (day) {
        case 0:
            printf("Saturday\n");
            break;
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        default:
            printf("Error in calculation\n");
    }

    return 0;
    
}