#include <stdio.h>

int main() {
    
    for(int i = 0; i < 5; i++) 
    {
        for(int j=5 ; j>=i ; j--) 
            printf(" ");
        int val = 1;
        for(int k = 0; k <= i; k++) 
        {
            printf("%d ", val);
            val = val * (i - k) / (k + 1);
        }
        printf("\n");
    }

    return 0;
}