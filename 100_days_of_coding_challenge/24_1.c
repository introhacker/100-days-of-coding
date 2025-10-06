#include <stdio.h>
int main(void) {
    int rows = 5, cols = 5;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
