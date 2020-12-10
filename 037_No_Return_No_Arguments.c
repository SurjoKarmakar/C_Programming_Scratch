#include<stdio.h>
void add(){
    int a=6;
    int b=7;
    printf("Sum of a + b is : %d",a+b);
    // no return 
}

int main(){
    printf("I am main function..\n");
    add();  // no arguments
    return 0;
}