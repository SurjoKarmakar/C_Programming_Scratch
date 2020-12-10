#include<stdio.h>
void increment()
{
	auto int i=1;
	static int j=1;
	i=i+1;

	//every time start with updatete or latest value ..however variable's scope is end..
	j=j+1;
	printf("%d\t%d\n",i,j);
}
int main()
{	
   //static storage class,when scope is end then life also be end
   increment();
   increment();
   increment();
   /*when control return from increment(), the variable i dies, whereas j being static ,continues to live with 
	its latest value..*/
  return 0;
}

