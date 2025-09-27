/*Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.*/

#include <stdio.h>
int main()
{
    int a;
    printf("Please enter the overdue days: ");
    scanf("%d",&a);

    if (a<=5){
        a = a*2;
        printf("Total overdue charge is %d",a);
    }
    else if (a>5,a<=10){
        a = a*4;
        printf("Total overdue charge is %d",a);
    }
    else if (a>10,a<=30){
        a = a*6;
        printf("Total overdue charge is %d",a);
    }
    else{
        printf("Your membership is canceled ");
    }

    return 0;
}