// 2.	Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

// 2. Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.

#include <stdio.h>

// Global variable
int globalVar = 50;

void testFunction() {
    int localVar = 100; // Local variable
    printf("Inside testFunction(): localVar = %d\n", localVar);
    printf("Inside testFunction(): globalVar = %d\n", globalVar);
}

int main() {
    testFunction();

    // Uncommenting the next line will cause a compile error, because localVar is not accessible here:
    // printf("In main(): localVar = %d\n", localVar);

    printf("In main(): globalVar = %d\n", globalVar);
printf("In testfunction(): localvar = %d\n", localVar);
    return 0;
}