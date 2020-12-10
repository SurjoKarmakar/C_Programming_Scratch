#include<stdio.h>
int main(){
    //array declaraton + initialization
    int array[5] = {2,4,6,8,10};  // [5] dimension of the array is optional when we declare and initialize both same time

    //here we print the value of array's index 2//array are start with 0 so index 2 means array's 3rd position's value...
    
    printf("%d\n",array[2]);  // 2 => subscript
    printf("%d",array[4]);
    return 0;
}

