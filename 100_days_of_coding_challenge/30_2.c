#include <stdio.h>

#define MAX_SIZE 1000  

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

    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0)
            ++positive;
        else if (arr[i] < 0)
            ++negative;
        else
            ++zero;
    }

    printf("Count of positive numbers: %d\n", positive);
    printf("Count of negative numbers: %d\n", negative);
    printf("Count of zeros:            %d\n", zero);

    return 0;
}
