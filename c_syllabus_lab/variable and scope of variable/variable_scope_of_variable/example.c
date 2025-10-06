#include <stdio.h>
int main(){
    int x = 10;
    printf("x in main (outer)=%d\n",x);
    {
       int x = 20;
       printf("x in inner block = %d\n",x); 
    }
    printf("x after inner block = %d\n",x);
    {
int x = 30;
printf("x in second block = %d\n",x);
    }
    printf("x at end of main = %d\n",x);
    return 0;
}