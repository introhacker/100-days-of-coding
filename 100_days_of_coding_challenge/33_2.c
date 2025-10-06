#include <stdio.h>

#define MAX_SIZE 1000  // Maximum allowed size after insertion

/* Inserts key into sorted ascending array of size n.
   Returns updated size and modifies array in place. */
void insert_sorted(int arr[], int *nptr, int key) {
    int n = *nptr;
    int i = n - 1;
    while (i >= 0 && arr[i] > key) {
        arr[i + 1] = arr[i];
        --i;
    }
    arr[i + 1] = key;
    *nptr = n + 1;
}

int main(void) {
    int n, arr[MAX_SIZE];

    printf("Enter number of elements in sorted array (up to %d): ", MAX_SIZE - 1);
    if (scanf("%d", &n) != 1 || n < 0 || n >= MAX_SIZE) {
        printf("Invalid input. Please enter a non-negative number less than %d.\n", MAX_SIZE);
        return 1;
    }

    if (n > 0) {
        printf("Enter %d sorted integer(s) (ascending):\n", n);
        for (int i = 0; i < n; ++i) {
            if (scanf("%d", &arr[i]) != 1) {
                printf("Invalid input detected. Please enter only integers.\n");
                return 1;
            }
        }
    }

    int key;
    printf("Enter element to insert: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    insert_sorted(arr, &n, key);

    printf("Array after insertion:\n");
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    putchar('\n');
    return 0;
}
