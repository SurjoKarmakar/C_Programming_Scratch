#include<stdio.h>
int main(){
	int i,j;
	char ch,ch1;
	printf("Enter a integer :\n");
	scanf("%d",&i);
	fflush(stdin);             //to remove kebord enter key or privius value buffer ....clear buffer
	printf("ebter a charater :\n");
	scanf("%c",&ch);
	printf("%d\t%c\n",i,ch);
	
	printf("Enter a integer :\n");
	scanf("%d",&j);
	getchar();             //hold char to input 
	printf("ebter a charater :\n");
	scanf("%c",&ch1);
	printf("%d\t%c",j,ch1);
	return 0;
}
