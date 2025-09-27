// WAP to enter the no. of subjects and the marks in each subject using array and print the sum of marks for that students 

#include <stdio.h>

int main()
{
    int marks[10],i,n,sum=0;
    printf("Enter number of students : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter marks of students: \n");
        scanf("%d",&marks[i]);
        sum+=marks[i];

    }
    printf("Sum=%d",sum);
}
