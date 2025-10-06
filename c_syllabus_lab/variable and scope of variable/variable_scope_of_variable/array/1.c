// 1. WAP to read a list of integers and store it in a single dimensional array. Write a C program to print the second largest integer in a list of integers.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0], second_largest = arr[0];
    // Find the largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
    }
    // Find the second largest
    second_largest = -2147483648; // Minimum possible int value
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > second_largest)
            second_largest = arr[i];
    }

    if (second_largest == -2147483648)
        printf("No second largest element found.\n");
    else
        printf("The second largest integer is: %d\n", second_largest);

    return 0;
}
