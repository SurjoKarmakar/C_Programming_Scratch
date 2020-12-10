#include<stdio.h>
int main()
{
	int j=0;
	int i=1;
	//in post increment, fist value of i assign into j , then i will be increment 1
	j=i++;
	printf("This is post increment of i is : %d\n",j);

	int x=0;
	int y=1;
	//in pre increment, first incrementation of y takes place ,then y will be assign into x
	x=++y;
	printf("This is pre increment of y is : %d\n",x);

	//simple example of post and pre
	int a=1;
	printf("%d%d%d\n",a,++a,a++);
	return 0;
}