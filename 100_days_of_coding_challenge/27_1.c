#include <stdio.h>
int main(void) {
    int max = 9;                 
    int half = (max + 1) / 2;   
    
    for (int i = 1; i <= half; ++i) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; ++j) putchar('*');
        putchar('\n');
    }
    
    for (int i = half - 1; i >= 1; --i) {
        int stars = 2 * i - 1;
        for (int j = 0; j < stars; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
