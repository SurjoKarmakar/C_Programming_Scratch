#include<stdio.h>
#define CODE
#undef CODE  //using this directive we can undefine all the macros that's are alredy defiend 

int main(){
    #ifdef CODE
        printf("this section of code is defined");
    #endif
    return 0;
}