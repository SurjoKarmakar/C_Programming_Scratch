#include<stdio.h>
int main(){
	int i=1,a;
	for(;i<10;){
		printf("%d\n",i);
		i++;
	}
	for(scanf("%d",&a);a<10;a++)
		printf("%d\n",a);	
	return 0;
}
