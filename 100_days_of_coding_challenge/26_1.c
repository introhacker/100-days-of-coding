#include <stdio.h>
int main(void) {
    int n = 5;
    for (int row = 1; row <= n; ++row) {
        for (int space = 0; space < n - row; ++space) putchar(' ');
        for (int num = n - row + 1; num <= n; ++num) printf("%d", num);
        putchar('\n');
    }
    return 0;
}
