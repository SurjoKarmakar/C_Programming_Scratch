#include<stdio.h>
int main()
{
	int i=0;
	loop:
		if(i<=10)
		{
			printf("%d\n",i);
			i++;
		}
	goto loop;
	return 0;
}
