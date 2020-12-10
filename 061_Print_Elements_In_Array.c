#include<stdio.h>
int main(){
    //array declaraton + initialization
    int array[5] = {2,4,6,8,10};  // [5] dimension of the array is optional when we declare and initialize both same time

    for(int i=0;i<=4;i++)
        //when i=0 then print array's 0th position's value ,,next i=1 print 1th position's value and so no upto i=4
        printf("array[%d]\n",array[i]); 
    return 0;
}
