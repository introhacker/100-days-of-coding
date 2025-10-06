#include <stdio.h>

int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld", &n) != 1) return 1;

    int negative = n < 0;
    
    unsigned long long num = (n < 0) ? -n : n;

    if (num < 10) {
        printf("Result: %s%llu\n", negative ? "-" : "", num);
        return 0;
    }

    unsigned long long last = num % 10;
    unsigned long long first = num;
    int digits = 0;

    while (first >= 10) {
        first /= 10;
        digits++;
    }
    digits++; 

    unsigned long long pow10 = 1;
    for (int i = 1; i < digits; ++i)
        pow10 *= 10;

    unsigned long long middle = num % pow10; 
    middle = middle / 10;                    

    unsigned long long result = last * pow10     
                              + middle * 10      
                              + first;          

    printf("Result: %s%llu\n", negative ? "-" : "", result);
    return 0;
}
