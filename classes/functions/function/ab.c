#include <stdio.h>
int main()
{
    int a = 10 ; //block code: inside main
    if(a>5)  {
      int b = 20 ; //block scope: inside if
        printf("%d\n",&b);

    }

    printf("%d",&b);
    return 0;

}