#include <stdio.h>

#define MAX_SIZE 1000  // Maximum number of elements allowed

int main(void) {
    int n;
    int arr[MAX_SIZE];

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Invalid input. Please enter a positive number not exceeding %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d integer(s):\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input detected. Please enter only integers.\n");
            return 1;
        }
    }

    int max = arr[0], min = arr[0];
    int max_idx = 0, min_idx = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
            max_idx = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            min_idx = i;
        }
    }

    printf("Largest value: %d (at index %d)\n", max, max_idx);
    printf("Smallest value: %d (at index %d)\n", min, min_idx);

    return 0;
}
