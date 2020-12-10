#include<stdio.h>
#define Pi 3.1428
//Do not give a space between the macro template and its argument ,no space beyween AREA and (x) 
#define AREA(x) (Pi*x*x)
int main()
{
	float r1=6.25,r2=2.5,area;
	area=AREA(r1);  //passing argument into macro
	printf("Area of circle r1 is=%f\n",area);
	area=AREA(r2);  //it replace with (3.1428*r2*r2)
	printf("Area of circle r2 is=%f",area);	
	return 0;
}

