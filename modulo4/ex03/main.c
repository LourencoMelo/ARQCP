#include <stdio.h>
#include "greatest.h"

int main(void){
	int a, b,c;
	a= -200;
	b = 4;
	c = 1;
	int result = greatest(a, b, c);
	printf("Greatest: %d", result);
	
	return 0;
}
