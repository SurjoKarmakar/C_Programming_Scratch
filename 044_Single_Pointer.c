#include<stdio.h>
int main()
{
	int i=3;
	int *j;   //Single pointer *j 
	j=&i;     //j=address of i 

	/*
	&i = address of i (6522)
	&j = address of j (6523)
	*(&i) = value of i's address (3)
	*j = value of stored address
	*/
	printf("Address of i %u \n",&i); 
	printf("Address of i %u \n",j);
	printf("Address of j %u \n",&j);
	printf("Value of j %d \n",j);
	printf("Value of i %d \n",i);
	printf("Value of i %d \n",*(&i));
	printf("Value of i %d \n",*j);
	return 0;
}
