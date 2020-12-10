#include<stdio.h>
#define CODE2
int main(){
    // ifdef => if define
    #ifdef CODE1  //this section of code compiled only if the macro CODE1 has been defiend as #defiend CODE! then...
        printf("this is code section 1\n");
    #endif

    #ifdef CODE2  //this section of code will be compiled ,because it defiend as a macro
        printf("this is code section 2\n");
    #endif

    // ifndef => if not define
    #ifndef CODE3   //this section of code compiled only if the macro CODE3 has not been defiend as #defiend CODE3 then...
        printf("this is code section 3\n");
    #endif
    printf("this is main function code section..\n");
    return 0;
}