// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main()
{
    char c;
    printf("Enter the character you want to input: ");
    scanf("%c",&c);

    if (c>='A' && c<='Z'){
        printf("Uppercase Alphabet");
    }
    else if (c>='a' && c<='z'){
        printf("Lowercase Alphabet");
    }
    else if (c>='0' && c<='9'){
        printf("Digit");
    }
    else {
        printf("Special Character ");
    }

    return 0;
}