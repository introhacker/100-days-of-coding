#include <stdio.h>
int main(void) {
    int half = 4;               
    int maxStars = 2 * half - 1;
    
    for (int i = 1; i <= half; ++i) {
        int stars = 2 * i - 1;
        int spaces = (maxStars - stars) / 2;
        for (int s = 0; s < spaces; ++s) putchar(' ');
        for (int j = 0; j < stars; ++j) putchar('*');
        putchar('\n');
    }
    
    for (int i = half - 1; i >= 1; --i) {
        int stars = 2 * i - 1;
        int spaces = (maxStars - stars) / 2;
        for (int s = 0; s < spaces; ++s) putchar(' ');
        for (int j = 0; j < stars; ++j) putchar('*');
        putchar('\n');
    }
    return 0;
}
