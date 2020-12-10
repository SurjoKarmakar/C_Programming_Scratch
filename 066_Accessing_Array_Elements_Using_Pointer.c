#include<stdio.h>
int main(){
    // xxx10 => 11
    // xxx14 => 22
    // xxx18 => 33
    // xxx22 => 44
    // xxx26 => 55
    int array[] = {11,22,33,44,55};
    int i, *j;

    j = &array[0]; //assign address of 0th element

    for (i=0;i<=4;i++)
    {
        printf("[+]Address => %u Element => %d\n",j,*j);
        j++; //every time it increment it point to next location ot its data type,,
    }
    
    return 0;
}