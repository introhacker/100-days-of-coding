#include <stdio.h>

#define MAX_SIZE 1000  

int binary_search(const int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(void) {
    int n, arr[MAX_SIZE];

    printf("Enter the number of elements (sorted in ascending order, up to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX_SIZE) {
        printf("Invalid input. Please enter a non-negative number not exceeding %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d sorted integer(s):\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input detected. Please enter only integers.\n");
            return 1;
        }
    }

    int key;
    printf("Enter the element to search for: ");
    if (scanf("%d", &key) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    int index = binary_search(arr, n, key);
    if (index != -1)
        printf("Element %d found at index %d (0-based)\n", key, index);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
