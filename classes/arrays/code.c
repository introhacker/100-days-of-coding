# include <stdio.h>

int main()
{

//Create and initialize an array with 3 rows and 2 columns 
int arr[3][2] = {{0,1}, {2,3}, {4,5}};

//Print each array element's value 
for (int i = 0; i<3 ; i++){
    for (int j = 0; j<2; j++){
        printf("Element at arr[%d][%d] = %d\n", i, j, arr[i][j]);
    }
}