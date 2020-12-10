#include<stdio.h>
int main()
{
	int a=10,b=20,x,y;
	printf("enter 2 no :\n");
	scanf("%d\n%d",&x,&y);
	//if the all conditions are ture then it will execute
	if ((a == x) && (b == y)) 
		printf("match ");
	else 
		printf("not match ");
	
	return 0;
}
