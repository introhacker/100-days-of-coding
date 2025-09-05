#include <stdio.h>
 
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);


    int i = 1; // Initialize i before the loop
    while (i <= n)
    {
        printf("%d\n", i);
        i++; // Increment i inside the loop
    }
    return 0;
}