#include<stdio.h>
int main()
{	
   //regiser storage class store the value in CPU register for quick access
   register int i;
   for(i=1;i<=10;i++)
   		printf("%d\n",i);
	return 0;
}
