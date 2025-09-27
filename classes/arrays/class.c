#include <stdio.h>

int main()

{

    int i;
    int arr[5] = {10,20,30,40,50}; //declaring and initializing array in C

    arr[0] =10;arr[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50; //initializing array in C

    for (i = 0; i < 5; i++)

    {

        printf("value of arr %d\n", arr[i]); //accessing array elements

    }

}