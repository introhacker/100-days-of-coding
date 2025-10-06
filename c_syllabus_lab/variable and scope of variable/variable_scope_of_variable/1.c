// Declare a global variable outside all functions and use it inside various functions to understand its accessibility.

#include <stdio.h>

// Global variable
int globalVar = 10;

void display() {
    printf("Inside display(), globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main(), globalVar = %d\n", globalVar);
    globalVar = 20; // Change value
    display();      // Call another function that uses globalVar
    return 0;
}