// Write a program to reverse a given number.

#include <stdio.h>
int main()
{
    int n, reversed = 0;
    printf("Enter the no. you want to reverse: ");
    scanf("%d", &n);

    while (n > 0) {
        int digit = n % 10;       
        reversed = reversed * 10 + digit; 
        n = n / 10;                
    }

    printf("Reversed number is: %d\n", reversed);

    return 0;
}
