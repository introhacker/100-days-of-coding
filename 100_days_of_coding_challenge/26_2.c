#include <stdio.h>
int main(void) {
    int groups[] = {1, 4, 5, 3, 1};
    int gcount = sizeof(groups) / sizeof(groups[0]);
    for (int g = 0; g < gcount; ++g) {
        for (int i = 0; i < groups[g]; ++i) {
            printf("*\n");
        }
        if (g != gcount - 1) putchar('\n'); 
    }
    return 0;
}
