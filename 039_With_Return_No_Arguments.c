#include<stdio.h>

int add(){
	int x=10;
	int y=20;
    return (x+y);
    //with return 
}

int main(){
    printf("I am main function..\n");
    int sum=add();  //no arguments
    printf("sum of a and b is : %d",sum);
    return 0;
}