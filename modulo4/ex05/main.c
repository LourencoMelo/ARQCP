#include <stdio.h>
#include "inc_and_square.h"

int main(void){
	int n1 = 3;
	int v2 = 4;
	
	int *v1;
	v1 = &n1;
	
	int square = inc_and_square(v1, v2);
	
	printf("Number: %d \n",n1);
	printf("Square: %d \n",square);
	
	return 0;
}
