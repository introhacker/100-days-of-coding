#include <stdio.h>

int main() {
    int L = 20;
    int a, b, c, d;

    printf("Ramanujan numbers up to cubes of %d:\n", L);

    for (a = 1; a <= L; a++) {
        for (b = a + 1; b <= L; b++) {   
            for (c = a + 1; c <= L; c++) {
                for (d = c + 1; d <= L; d++) {   
                    int left = a*a*a + b*b*b;
                    int right = c*c*c + d*d*d;

                    if (left == right) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               left, a, b, c, d);
                    }
                }
            }
        }
    }
    return 0;
}
