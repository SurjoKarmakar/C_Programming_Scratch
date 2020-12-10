#include <stdio.h> 
//function prototype declaration
void message();
// this is main function()
int main() 
{ 
	printf("i am a main function\n");
	message();     //calling the user define message() function..
	return 0; 
} 

// Create user define function()
void message()
{
	printf("i am message function");
	
}