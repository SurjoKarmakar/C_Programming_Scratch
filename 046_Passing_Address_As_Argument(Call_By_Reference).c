#include<stdio.h>
void swap(int *x,int *y)  //here we hold the address of a and b as a x pointer and y pointer
{ 
	//in call by reference ,when we modyfi anything into here it also effect the main()'s variable 
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a=10,b=20;

	//here we passing the address of a and b 
	swap(&a,&b);  //call by reference
	printf("a is =%d\nb is =%d",a,b);
	return 0;
}

