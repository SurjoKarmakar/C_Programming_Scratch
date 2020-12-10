#include<stdio.h>

int add(int x ,int y){
    return (x+y);
    //with return
}

int main(){
    printf("I am main function..\n");
    int sum=add(6,7);  //with arguments
    printf("sum of a and b is : %d",sum);
    return 0;
}