#include<stdio.h>
int main(){
	//we can define a function inside a main() function
	//but we cant define a function inside a another user define function...ok
	void message(){
		printf("Hi i am message function\n");
	}

	printf("I am main function...\n");
	message();
	return 0;
}