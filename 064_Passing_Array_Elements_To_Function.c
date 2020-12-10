#include<stdio.h>
//Call by Value
void callByValue(int x){
    static int index=0;
    printf("array[%d] => %d\n",index,x);
    index++;
}

//Call by Reference
void callByReference(int *y){
    static int index=0;
    printf("array[%d] => %d\n",index,*y);
    index++;
}

int main(){
    int array[] = {11,22,33,44,55};
    int i;
    puts("[+]Call by Value => Passing value");
    for(i=0;i<=4;i++)
        callByValue(array[i]);

    puts("[+]Call by Reference => Passing address");
    for(i=0;i<=4;i++)
        callByReference(&array[i]);

    return 0;
}