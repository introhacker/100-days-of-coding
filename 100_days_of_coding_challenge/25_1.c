#include <stdio.h>
int main(void) {
    int n = 5;
    for (int start = n; start >= 1; --start) {
        for (int j = start; j <= n; ++j)
            printf("%d", j);
        putchar('\n');
    }
    return 0;
}
