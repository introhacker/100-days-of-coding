#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n;
    if (printf("Enter number of elements: ") < 0) return 1;
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid size. n must be a positive integer.\n");
        return 1;
    }
    int *arr = malloc(n * sizeof(int));
    if (!arr) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integer(s):\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            return 1;
        }
    }
    int key;
    printf("Enter element to search: ");
    if (scanf("%d", &key) != 1) {
        fprintf(stderr, "Invalid input for search key\n");
        free(arr);
        return 1;
    }
    int index = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) { index = i; break; }
    }
    if (index != -1)
        printf("Element %d found at index %d (0-based)\n", key, index);
    else
        printf("Element %d not found in the array\n", key);
    free(arr);
    return 0;
}
