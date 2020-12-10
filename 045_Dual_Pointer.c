#include<stdio.h>
int main()
{
	int i=3;
	int *j,**k; //Dual pointer **k 
	j=&i;
	k=&j;  //k=address of j
	/*
	i = 3 ,value of i
	&i = x ,address of i
	j = x , j store i's address
	&j = y
	k = y , k store j's address
	&k = z
	*/
	printf("Address of i %u \n",&i);
	printf("Address of i %u \n",j);
	printf("Address of i %u \n",*k);
	printf("Address of j %u \n",&j);
	printf("Address of j %u \n",k);
	printf("Address of k %u \n",&k);
	printf("Value of j %d \n",j);
	printf("Value of j %d \n",k);
	printf("Value of i %d \n",i);
	printf("Value of i %d \n",*(&i));
	printf("Value of i %d \n",*j);
	printf("Value of i %d \n",**k);  
	return 0;
}
