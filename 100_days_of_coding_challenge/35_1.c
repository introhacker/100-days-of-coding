#include <stdio.h>

#define MAX_SIZE 1000   

int main(void) {
    int n, arr[MAX_SIZE];

    printf("Enter number of elements (up to %d): ", MAX_SIZE);
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

    if (n == 1) {
        printf("Array has only one element; second largest does not exist.\n");
        return 0;
    }

    int largest = arr[0], second = arr[0];
    for (int i = 1; i < n; ++i) {
        int x = arr[i];
        if (x > largest) {
            second = largest;
            largest = x;
        } else if (x > second && x < largest) {
            second = x;
        }
    }

    int distinct_found = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != largest) {
            distinct_found = 1;
            break;
        }
    }

    if (!distinct_found) {
        printf("No second largest element (all elements are equal).\n");
    } else {
        printf("Second largest = %d\n", second);
    }

    return 0;
}
