#include<stdio.h>
int main()
{
    int a=100000;
    for(int i=1 ; i<=10 ; i++)
    {
            printf("POPULATION AT THE END OF %d year is = %d",i,a=a+a*0.1);
            printf("\n");       
    }
    printf("FINISH");
    return 0;
}