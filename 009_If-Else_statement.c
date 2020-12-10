#include<stdio.h>
int main()
{
	int a=110;
	int b;
	printf("enter a no :");
	scanf("%d",&b);
	if (b == a)                     //if statement is wrong 
		printf("a is equal to 110");
	else
		printf("a is not equal to 110");  //then else statement is executed
	return 0;
}

