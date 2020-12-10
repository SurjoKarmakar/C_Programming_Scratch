#include <stdio.h>
#define NUM1 10
#define NUM2 20 

int main() {  
    //as simple as normal if, else if ,else
    #if NUM1 > NUM2 
        printf("Num1 is greater than Num2\n");

    #elif NUM1 < NUM2
        printf("Num1 is less than Num2"); 
    
    #else 
        printf("Num1 is equal to Num2");  
    #endif  
    return 0;
  
}