#include <stdio.h>

int main() {
    char ch;
    int valid = 1;

    printf("Enter a binary number: ");
    printf("1's Complement: ");

    while ((ch = getchar()) != '\n') {
        if (ch == '0') {
            putchar('1');
        } else if (ch == '1') {
            putchar('0');
        } else {
            printf("\nInvalid binary digit '%c'\n", ch);
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("\n");

    return valid ? 0 : 1;
}
