#include<stdio.h>
void loop(int x){
	if (x>=0){
		printf("%d\n",x);
		//callling loop() function itself 
		loop(x-1);  //everytime calling the function itself, the value of x will be decrease
	}
}
int main()
{
	int a=10;
	loop(a);
	return 0;
}