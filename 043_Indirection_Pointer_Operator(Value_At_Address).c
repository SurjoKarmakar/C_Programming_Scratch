#include<stdio.h>
int main()
{
	int i=3;
	printf("Address of i %u \n",&i); //& = address of i 
	printf("Value of i %d \n",i);

	// * this pointer operator is called a "value of address",it gives the value stored at a particular address..
	printf("value of i %d \n",*(&i)); 
	return 0;
}
