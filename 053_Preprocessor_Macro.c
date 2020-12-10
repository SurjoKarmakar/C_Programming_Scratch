#include<stdio.h>
// #define [macro template] [macro expansion]
#define PI 3.1428  //define Pi as a 3.1428 value,it means Pi work as a 3.1428 float value
#define PRINT printf("Result is %f\n",area)  //same here defiend PRINT work as full printf statement
int main()
{
	float r=6.25,area;
	area=PI*r*r; 
	PRINT;
	return 0;
}

