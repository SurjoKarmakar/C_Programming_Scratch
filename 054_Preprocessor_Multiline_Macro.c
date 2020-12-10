#include<stdio.h>
//we can define multiline macro with \ (backslash)
#define ILOOP for(int i=0;i<=10;i++) \
			  	printf("%d\n",i)
int main()
{
	ILOOP;
	return 0;
}