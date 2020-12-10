#include<stdio.h>
extern int x=20;  //external storage class is Global//
void decrement() 
{
	x=x-1;
	printf("x is %d in decrement\n",x);
}
int main()
{
	x=x+1;
	printf("x is %d in main \n",x);
	decrement();
	decrement();
}

