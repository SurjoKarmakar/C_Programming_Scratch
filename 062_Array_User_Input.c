#include<stdio.h>
int main(){
    int array[10];
    int i;

    //User Input
    puts("[+]Enter The Array Element's ...\n");
    for (i=0;i<=9;i++){
        printf("array[%d] <= ",i); 
        scanf("%d",&array[i]);  
    }
    
    //Print Array Elements's
    puts("[+]Printing The Array Elements One By One\n");
    for (i=0;i<=9;i++)
        printf("array[%d] => %d\n",i,array[i]);
    return 0;
}