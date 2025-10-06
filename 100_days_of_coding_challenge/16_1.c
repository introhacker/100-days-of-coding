// Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
void printBinary(int num) {
    int binary[32];
    int i = 0;
    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printBinary(number);
    return 0;
}