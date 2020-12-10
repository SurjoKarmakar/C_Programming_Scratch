#include<stdio.h>
int main(){
	int cho;
	printf("Enter your choice [1:c 2:c++ 3:python 4:java ]");
	scanf("%d",&cho);
	switch (cho){
		case 1:
			printf("learn c programming ");
			//if we dont use break statement then if and only eny case will be true then, after this case every case should be execute....
			//so it is importent to put break in every case 
			 
		case 2:
			printf("learn c++ programming ");
			
		case 3:
			printf("learn python programming ");
			
		case 4:
			printf("learn java programming ");
			
		default :
			printf("wrong choice");
			
	}
	return 0;
}
