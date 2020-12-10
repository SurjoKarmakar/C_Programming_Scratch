#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=5;
    if (a <= 10){
        goto sos;  //jump to sos: defining line ...skip or jump every line into goto sos - sos:....
    }

    printf("just testing 1 /n"); //this is not execute...
    sos: printf("I am here for Goto keyword... \n"); //this line execute first ..becasue goto keyword

    printf("Just testing 2");// after sos: line now it is executed...
    exit(1); //here we are end or terminate the main()
    printf("Just testing 3"); //so it is not execute atall ..ok
    return 0;
}