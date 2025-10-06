#include <stdio.h>

#define MAX_SIZE 1000   

int main(void) {
    int n;
    long long arr[MAX_SIZE];

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Invalid input. Please enter a positive number not exceeding %d.\n", MAX_SIZE);
        return 1;
    }

    printf("Enter %d integer(s):\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%lld", &arr[i]) != 1) {
            printf("Invalid input detected. Please enter only integers.\n");
            return 1;
        }
    }

    long long sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];

    printf("The total sum of the entered values is: %lld\n", sum);
    return 0;
}
