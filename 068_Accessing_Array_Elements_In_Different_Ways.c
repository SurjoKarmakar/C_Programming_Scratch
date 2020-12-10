#include<stdio.h>
int main(){
    int array[] = {11,22,33};

    for (int i=0;i<=2;i++){
        //accessing array elements in different ways
        //array[i] == i[array] == *(array + i) == *(i + array) => all are same
        printf("[1] array[i] => %d\n",array[i]);  //we generally use this statement to access our array elements,,but we can also use [2,3,4]
        printf("[2] i[array] => %d\n",i[array]);  
        printf("[3] *(array + i) => %d\n",*(array + i));
        printf("[4] *(i + array) => %d\n",*(i + array)); 
        puts("\n");
    }

    return 0;
}