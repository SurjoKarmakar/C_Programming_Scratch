#include<stdio.h>
int main()
{	
	//See dufault garbage value of auto storage class
	auto int a;
	printf("the garbage value of a is :%d\n",a);
	//Scope and life of an auto variable 
	//Scope :local to the block in which the variable is defiend
	auto int i=1;
	{	
		auto int i=2;
		{
			auto int i=3;
			printf("%d\n",i);
		}
		printf("%d\n",i);
	}
	printf("%d\n",i);
	return 0;
}
