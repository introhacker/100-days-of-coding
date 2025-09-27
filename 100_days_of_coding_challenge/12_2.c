/*Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit*/

#include <stdio.h>
int main()
{
    int a;
    printf("Please enter your electricity consuption: ");
    scanf("%d",&a);

    if (a<=100){
        a = a*5;
        printf("Bill: %d",a);
    }
    else if (a>100,a<=200){
        a = a*7;
        printf("Bill: %d",a);
    }
    else if (a>200,a<=300){
        a = a*10;
        printf("Bill: %d",a);
    }
    else {
        a = a*12;
        printf("Bill: %d",a);
    }

    return 0;
    }

