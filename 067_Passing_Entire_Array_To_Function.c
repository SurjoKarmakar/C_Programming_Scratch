#include<stdio.h>
void passArray1(int *, int);
void passArray2(int *, int);
int main(){
    int array[] = {11,22,33,44,55};
    int sizeOfArray = (sizeof(array)) / 4;  //calculate the size of array

    //Passing Entire Array using Address of First Array Element
    puts("[+]Passing Entire Array using Address of First Array Element");
    passArray1(&array[0],sizeOfArray);

    //Passing Entire Array using Array Variable Name
    puts("[+]Passing Entire Array using Array Variable Name");
    passArray2(array, sizeOfArray);  
    return 0;
}

void passArray1(int *j, int size){ //we can also use this to receive => passArray(int j[],int size)
    for(int i=0;i<=size-1;i++){
        printf("array[%d] => %d\n",i,*j);
        j++;
    }

}

void passArray2(int *j, int size){
    for(int i=0;i<=size-1;i++){
        printf("array[%d] ==> %d\n",i,*j);
        j++;
    }

}