#include<stdio.h>
// x and y are called "formal arguments"
int add(int x ,int y){ //parameters
	return (x+y);
}
int main()
{
	int a=4;
	int b=8;
	//a and b are called "actual arguments"
	int sum = add(a,b);  //arguments
	printf("[+]Sum of a + b is : %d",sum);
	return 0;
}