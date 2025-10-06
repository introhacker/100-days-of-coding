#include <stdio.h>

#define MAX_SIZE 1000  

int insert_at(int arr[], int *nptr, int pos, int value) {
    int n = *nptr;
    if (pos < 0 || pos > n || n >= MAX_SIZE) return 0; 
    for (int i = n; i > pos; --i)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    *nptr = n + 1;
    return 1;
}

int main(void) {
    int n, arr[MAX_SIZE];

    printf("Enter number of elements (up to %d): ", MAX_SIZE - 1);
    if (scanf("%d", &n) != 1 || n < 0 || n >= MAX_SIZE) {
        printf("Invalid input. Please enter a non-negative number less than %d.\n", MAX_SIZE);
        return 1;
    }

    if (n > 0) {
        printf("Enter %d integer(s):\n", n);
        for (int i = 0; i < n; ++i) {
            if (scanf("%d", &arr[i]) != 1) {
                printf("Invalid input detected. Please enter only integers.\n");
                return 1;
            }
        }
    }

    int pos, value;
    printf("Enter position to insert (0-based): ");
    if (scanf("%d", &pos) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter value to insert: ");
    if (scanf("%d", &value) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (!insert_at(arr, &n, pos, value)) {
        printf("Insert failed. Position may be invalid or array size exceeded.\n");
        return 1;
    }

    printf("Array after insertion:\n");
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    putchar('\n');
    return 0;
}
