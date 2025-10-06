#include <stdio.h>

#define MAX_SIZE 1000  

int main(void) {
    int n1, n2;
    int a[MAX_SIZE], b[MAX_SIZE], merged[2 * MAX_SIZE];

    printf("Enter size of the first sorted array (up to %d): ", MAX_SIZE);
    if (scanf("%d", &n1) != 1 || n1 < 0 || n1 > MAX_SIZE) {
        printf("Invalid input. Please enter a non-negative number not exceeding %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter size of the second sorted array (up to %d): ", MAX_SIZE);
    if (scanf("%d", &n2) != 1 || n2 < 0 || n2 > MAX_SIZE) {
        printf("Invalid input. Please enter a non-negative number not exceeding %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d sorted element(s) for the first array:\n", n1);
    for (int i = 0; i < n1; ++i) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input detected. Please enter only integers.\n");
            return 1;
        }
    }

    printf("Enter %d sorted element(s) for the second array:\n", n2);
    for (int i = 0; i < n2; ++i) {
        if (scanf("%d", &b[i]) != 1) {
            printf("Invalid input detected. Please enter only integers.\n");
            return 1;
        }
    }

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < n1)
        merged[k++] = a[i++];
    while (j < n2)
        merged[k++] = b[j++];

    printf("Merged sorted array:\n");
    for (int idx = 0; idx < k; ++idx)
        printf("%d ", merged[idx]);

    putchar('\n');
    return 0;
}
