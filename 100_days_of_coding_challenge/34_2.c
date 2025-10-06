#include <stdio.h>

#define MAX_SIZE 1000 

int delete_at(int arr[], int *nptr, int pos) {
    int n = *nptr;
    if (pos < 0 || pos >= n) return -1;
    for (int i = pos; i < n - 1; ++i)
        arr[i] = arr[i + 1];
    *nptr = n - 1;
    return 0;
}


int delete_value(int arr[], int *nptr, int value) {
    int n = *nptr;
    int idx = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            idx = i;
            break;
        }
    }
    if (idx == -1) return -1;
    for (int i = idx; i < n - 1; ++i)
        arr[i] = arr[i + 1];
    *nptr = n - 1;
    return idx;
}

int main(void) {
    int n, arr[MAX_SIZE];

    printf("Enter number of elements (up to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE) {
        printf("Invalid input. Please enter a non-negative number not exceeding %d.\n", MAX_SIZE);
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

    int choice;
    printf("Delete by 1) position or 2) value? Enter 1 or 2: ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (choice == 1) {
        int pos;
        printf("Enter position to delete (0-based): ");
        if (scanf("%d", &pos) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        if (delete_at(arr, &n, pos) == 0)
            printf("Deleted element at position %d.\n", pos);
        else
            printf("Invalid position.\n");
    } else if (choice == 2) {
        int value;
        printf("Enter value to delete (first occurrence): ");
        if (scanf("%d", &value) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
        int idx = delete_value(arr, &n, value);
        if (idx != -1)
            printf("Deleted value %d at index %d.\n", value, idx);
        else
            printf("Value %d not found.\n", value);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    printf("Array after deletion (%d element(s)):\n", n);
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);

    putchar('\n');
    return 0;
}
