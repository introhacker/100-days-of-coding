#include <stdio.h>

int main() {
    int i, j, k, num = 1;

    for (i = 1; i <= 3; i++) {         
        for (k = 1; k <= 3 - i; k++)    
            printf(" ");

        for (j = 1; j <= i; j++) {      
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
