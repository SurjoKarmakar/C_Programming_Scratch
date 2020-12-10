#include<stdio.h>
int main(){
    char x;
    printf("[+]Enter your choice : ");
    scanf("%c",&x);

    switch (x)
    {
    case 'a':
        printf("you are choice a ..");
        break;
    case 'b':
        printf("you are choice b ..");
        break;

    //here if input is lower c then this case shoud be true and it is execute ...
    //and we dont use break so if this case execute then after every case shoud be execute as well...
    case 'c':
    case 'C':
        printf("you are choice either c or C ..");
        break;

    }
    return 0;
}