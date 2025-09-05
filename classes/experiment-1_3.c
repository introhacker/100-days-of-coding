# include <stdio.h>

int main() {
     char name[50];
    int age;

    printf("Enter your name: \n");
    scanf("%s",name); 
    
    printf("Enter your age: \n");
    scanf("%d",&age);
    
    printf("Name: %s\n", name);
    printf("Age: %d\n",&age);
    
    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;

}