#include<stdio.h>
void add(int x ,int y){
    printf("Sum of a + b is : %d",x+y);
    //no return
}

int main(){
    printf("I am main function..\n");
    add(6,4);  //with arguments
    return 0;
}