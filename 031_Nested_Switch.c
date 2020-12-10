 #include <stdio.h> 
int main(){ 
	int x = 1, y = 2; 
	switch (x){ 
	case 1: 
	 // NESTED SWITCH
		switch (y) 
		{ 
		case 2: 
			printf( "Choice is 2"); 
			break; 
		case 3: 
			printf( "Choice is 3"); 
			break; 
		} 
		break; 
	case 4: 
		printf( "Choice is 4"); 
		break; 
	case 5: 
		printf( "Choice is 5"); 
		break; 

	default: 
		printf( "Choice is other than 1, 2 3, 4, or 5"); 
		break; 
	} 
	return 0; 
} 

