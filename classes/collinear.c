// WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.

#include <stdio.h>

int main()
{
    int x1, x2, x3, y1, y2, y3;
    printf("Enter the coordinates: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if ((x2 - x1) * (y3 - y1) == (y2 - y1) * (x3 - x1))
        printf("The points are collinear\n");
    else
        printf("The points are not collinear\n");

    return 0;
}


